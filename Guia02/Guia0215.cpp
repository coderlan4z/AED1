/*
Guia_0215 - v0.0. - __ / __ / _____
Author: _____________________
Para compilar em uma janela de comandos (terminal):
No Linux
: g++ -o Guia0215
No Windows: g++ -o Guia0215
./Guia0201.cpp
Guia0201.cpp
Para executar em uma janela de comandos (terminal):
No Linux
: ./Guia0201
No Windows: Guia0215
*/
#include "karel.hpp"
#include "io.hpp"
// para entradas e saídas
// --------------------------- definicoes de metodos
/**
 * execute - Metodo para executar um comando.
 */

void decorateWorld(const char *fileName)
{
      // colocar paredes no mundo
      world->set(2, 3, VWALL);
      world->set(2, 4, VWALL);
      world->set(2, 5, VWALL);
      world->set(2, 6, VWALL);
      world->set(2, 7, VWALL);
      world->set(2, 8, VWALL);
      world->set(3, 3, VWALL);
      world->set(3, 4, VWALL);
      world->set(3, 5, VWALL);
      world->set(3, 6, VWALL);
      world->set(3, 7, VWALL);
      world->set(4, 3, VWALL);
      world->set(4, 4, VWALL);
      world->set(4, 5, VWALL);
      world->set(4, 6, VWALL);
      world->set(4, 7, VWALL);
      world->set(5, 3, VWALL);
      world->set(5, 4, VWALL);
      world->set(5, 5, VWALL);
      world->set(5, 6, VWALL);
      world->set(5, 7, VWALL);
      world->set(5, 8, VWALL);
      world->set(3, 2, HWALL);
      world->set(4, 2, HWALL);
      world->set(5, 2, HWALL);
      world->set(3, 8, HWALL);
      world->set(5, 8, HWALL);
      // colocar um marcador no mundo
      world->set(3, 3, BEEPER);
      world->set(4, 3, BEEPER);
      world->set(4, 4, BEEPER);
      world->set(4, 4, BEEPER);
      world->set(5, 3, BEEPER);
      world->set(5, 4, BEEPER);
      world->set(5, 4, BEEPER);
      world->set(5, 5, BEEPER);
      world->set(5, 5, BEEPER);
      world->set(5, 5, BEEPER);

      // salvar a configuracao atual do mundo
      world->save(fileName);
} // decorateWorld ( )
/**
 Classe para definir robo particular (MyRobot),
a partir do modelo generico (Robot)
Nota: Todas as definicoes irao valer para qualquer outro robo
criado a partir dessa nova descricao de modelo.
*/
class MyRobot : public Robot
{
public:
 void turnRight()
      {
            // definir dado local
            int step = 0;
            // testar se o robo esta' ativo
            if (checkStatus())
            {
                  // o agente que executar esse metodo
                  // devera' virar tres vezes 'a esquerda
                  for (step = 1; step <= 3; step = step + 1)
                  {
                        turnLeft();
                  } // end for
            }       // end if
      }             // end turnRight ( )


     /**
translateActions - Metodo para receber comandos de arquivo e traduzi-los.
@param fileName - nome do arquivo
*/
      void translateActions(const char *fileName)
      {
            // definir dados
            int action;
            // definir arquivo de onde ler dados
            std::ifstream archive(fileName);
            // repetir enquanto houver dados
            archive >> action;
            // tentar ler a primeira linha
            while (!archive.eof()) // testar se nao encontrado o fim
            {
                  // tentar traduzir um comando
                  IO_print(dictionary(action));
                  getchar();
                  // guardar mais um comando
                  execute(action);
                  // tentar ler a proxima linha
                  archive >> action;
                  // tentar ler a proxima linha
            } // end for
            // fechar o arquivo
            // RECOMENDAVEL para a leitura
            archive.close();
      } // end translateActions ( )

      /**
       * dictionary - Metodo para traduzir um comando.
       * @param action - comando a ser traduzido
       */
      chars dictionary(int action)
      {
            // definir dado
            static char word[80];
            strcpy(word, ""); // palavra vazia
            // identificar comando
            switch (action)
            {
            case 1: // virar para a esquerda
                  strcpy(word, "turnLeft( ); ");
                  break;
            case 2: // virar para o sul
                  strcpy(word, "faceSouth( ); ");
                  break;
            case 3: // virar para a direita
                  strcpy(word, "turnRight( ); ");
                  break;
            case 4: // virar para o oeste
                  strcpy(word, "faceWest( ); ");
                  break;
            case 5: // mover
                  strcpy(word, "move( );");
                  break;
            case 6: // virar para o leste
                  strcpy(word, "faceEast( ); ");
                  break;
            case 7: // pegar marcador
                  strcpy(word, "pickBeeper( );");
                  break;
            case 8: // virar para o norte
                  strcpy(word, "faceNorth( ); ");
                  break;
            case 9: // colocar marcador
                  strcpy(word, "putBeeper( ); ");
                  break;
            } // end switch
            // retornar palavra equivalente
            return (&(word[0]));
      } // end dictionary( )

      /**
playActions - metodo para receber comandos de arquivo.
@param fileName - nome do arquivo
*/
      void playActions(const char *fileName)
      {
            // definir dados
            int action;
            // definir arquivos de onde ler dados
            std::ifstream archive(fileName);
            // repetir enquanto houver dados
            archive >> action;
            // tentar ler a primeira linha
            while (!archive.eof()) // testar se nao encontrado o fim
            {
                  // mostrar mais um comando
                  IO_print(IO_toString(action));
                  delay(stepDelay);
                  // executar mais um comando
                  execute(action);
                  // tentar ler a proxima linha
                  archive >> action;
                  // tentar ler a próxima linha
            } // end for
            // fechar o arquivo
            // RECOMENDAVEL para a leitura
            archive.close();
      } // end playActions ( )

      /**
       * recordActions - Metodo para mover o robot interativamente
       * e guardar a descricao da tarefa em arquivo.
       * @param fileName - nome do arquivo
       */
      void recordActions(const char *fileName)
      {
            // definir dados
            int action;
            // definir arquivo onde gravar comandos
            std::ofstream archive(fileName);
            // ler acao
            action = IO_readint("Command? ");
            // repetir enquanto acao maior ou igual a zero
            while (action >= 0)
            {
                  // testar se opcao valida
                  if (0 <= action && action <= 9)
                  {
                        // executar comando
                        execute(action);
                        // guardar o comando em arquivo
                        archive << action << "\n";
                  } // end if
                  // ler acao
                  action = IO_readint("Command? ");
            } // end while
            // fechar o arquivo
            // INDISPENSAVEL para a gravacao
            archive.close();
      } // end recordActions ( )
      /**
      appendActions - Metodo para acrescentar comandos ao arquivo e traduzi - los.@param filename - nome do arquivo
      */
      void appendActions(const char *fileName)
      {
            // definir dados
            int action;
            // definir arquivo para receber acrescimos ao final
            std::fstream archive(fileName, std::ios::app);
            // repetir enquanto acao diferente de zero
            do
            {
                  // ler acao
                  action = IO_readint("Command? ");
                  // testar se opcao valida
                  if (0 <= action && action <= 9)
                  {
                        // executar comando
                        execute(action);
                        // guardar o comando em arquivo
                        archive << action << std::endl;
                  } // end if
            } while (action != 0);
            // fechar o arquivo
            // INDISPENSAVEL para a gravacao
            archive.close();
      } // end appendActions ( )

      /* @param action - comando a ser executado */

      void execute(int option)
      {
            // executar a opcao de comando
            switch (option)
            {
            case 0: // terminar
                  // nao fazer nada
                  break;
            case 1: // virar para a esquerda
                  if (leftIsClear())
                  {
                        turnLeft();
                  } // end if
                  break;
            case 2: // virar para o sul
                  while (!facingSouth())
                  {
                        turnLeft();
                  } // end while
                  break;
            case 3: // virar para a direita
                  if (rightIsClear())
                  {
                        turnRight();
                  } // end if
                  break;
            case 4: // virar para o oeste
                  while (!facingWest())
                  {
                        turnLeft();
                  } // end while
                  break;
            case 5: // mover
                  if (frontIsClear())
                  {
                        move();
                  } // end if
                  break;
            case 6: // virar para o leste
                  while (!facingEast())
                  {
                        turnLeft();
                  } // end while
                  break;
            case 7: // pegar marcador
                  if (nextToABeeper())
                  {
                        pickBeeper();
                  } // end if
                  break;
            case 8: // virar para o norte
                  while (!facingNorth())
                  {
                        turnLeft();
                  } // end while
                  break;
            case 9: // colocar marcador
                  if (beepersInBag())
                  {
                        putBeeper();
                  } // end if
                  break;
            default: // nenhuma das alternativas anteriores
                  // comando invalido
                  show_Error("ERROR: Invalid command.");
            } // end switch
      }       // end execute( )
      /**
       * moveI - Método para mover o robô interativamente.
       * Lista de comandos disponíveis:
       * 0 - turnOff
       * 1 - turnLeft
       * 2 - to South
       * 3 - turnRight
       * 4 - to West
       * 5 - move
       * 6 - to East
       * 7 - pickBeeper
       * 8 - to North
       * 9 - putBeeper
       */
      void moveI()
      {
            // Definir dados
            int action;

            // Repetir (com testes no fim)
            // enquanto opção diferente de zero
            do
            {
                  // Ler opção
                  action = IO_readint("Command? ");

                  // Executar ação dependente da opção
                  execute(action);
            } while (action != 0);
      } // end moveI()
  };
/**
Acao principal: executar a tarefa descrita acima.
*/
int main()
{
      // definir o contexto
      // criar o ambiente e decorar com objetos
      // OBS.: executar pelo menos uma vez,
      // antes de qualquer outra coisa
      // (depois de criado, podera' ser comentado)
      world->create("");
      // criar o mundo
      decorateWorld("Guia0215.txt");
      world->show();
      // preparar o ambiente para uso
      world->reset();
      // limpar configuracoes
      world->read("Guia0215.txt"); // ler configuracao atual para o ambiente
      world->show();
      // mostrar a configuracao atual
      set_Speed(1);
      // definir velocidade padrao
      // criar robo
      MyRobot *robot = new MyRobot();
      // posicionar robo no ambiente (situacao inicial):
      // posicao(x=1,y=1), voltado para direita, com zero marcadores, nome escolhido )
      robot->create(1, 1, EAST, 0, "Karel");
      // executar tarefa
      robot->recordActions("Tarefa0215.txt");
      // executar tarefa
      robot->moveI();
      // dar uma pausa na entrada de comandos
      show_Text("Pause on recording");
      // mostrar configuracao atual do mundo
      world->show();
      // retomar a entrada de comandos
      robot->appendActions("Tarefa0215.txt");
      // reproduzir todos os comandos
      robot->playActions("Tarefa0215.txt");
      

      world->close();
      // encerrar programa
      getchar();
      return (0);

} // end main ( )
