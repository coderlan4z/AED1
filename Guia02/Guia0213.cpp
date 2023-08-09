/*
Guia_0213 - v0.0. - __ / __ / _____
Author: _____________________
Para compilar em uma janela de comandos (terminal):
No Linux
: g++ -o Guia0213
No Windows: g++ -o Guia0213
./Guia0201.cpp
Guia0201.cpp
Para executar em uma janela de comandos (terminal):
No Linux
: ./Guia0201
No Windows: Guia0213
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
      world->set(3, 3, BEEPER);
      world->set(3, 3, BEEPER);
      world->set(4, 3, BEEPER);
      world->set(4, 3, BEEPER);
      world->set(5, 3, BEEPER);
  

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
      /**
      turnRight - Procedimento para virar 'a direita.
      */
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
      moveN - Metodo para mover certa quantidade de passos.
      @param steps - passos a serem dados.
      */
      void moveN(int steps)
      {
            // definir dado local
            int step = 0;
            // testar se a quantidade de passos e' maior que zero
            for (step = steps; step > 0; step = step - 1)
            {
                  // dar um passo
                  move();
            } // end if
      }       // end moveN( )
      /**
      doPartialTask - Metodo para especificar parte de uma tarefa.
      */
      void doPartialTask()
      {
            // especificar acoes dessa parte da tarefa
            moveN(3);
            turnLeft();
      } // end doPartialTask( )
      /**
      doTask - Relacao de acoes para o robo executar.
      */
     void moveRight(){
            if (rightIsClear())
            {
                  turnRight();
                  move();
            }
     }
     void moveLeft(){
            if (leftIsClear())
            {
                  turnLeft();
                  move();
            }
     }
     void isPosition(){
      if(areYouHere(1,9)){
            putBeepers();
      }
     }

      void doTask()
      {
            moveN(1);
            turnLeft();
            moveN(8);
            moveRight();
            moveN(1);
            moveRight();
            moveRight();
            moveLeft();
            moveN(4);
            faceNorth();
            pickBeepers();
            moveN(5);
            moveRight();
            moveRight();
            moveN(4);
            faceNorth();
            pickBeepers();
            moveN(5);
            moveRight();
            moveRight();
            moveN(4);
            faceNorth();
            pickBeepers();
            moveN(5);
            moveLeft();
            moveRight();
            moveLeft();
            moveN(2);
            isPosition();
            faceSouth();
            moveN(8);
            turnLeft();
            turnOff();
      } // end doTask( )

      /*
            putBeepers - Funcao para colocar marcadores.
            @param n - numero de marcadores a serem colocados
      */
     int putBeepers()
     {
            while ( beepersInBag() )
            {
                  putBeeper();
                  
            }
            return (0);
            
     }

      /**
       * pickBeepers - Funcao para coletar marcadores.
       * @return quantidade de marcadores coletados
       */
      int pickBeepers()
      {
            // enquanto houver marcador proximo
            while (nextToABeeper())
            {
                  // coletar um marcador
                  pickBeeper();
            } // end while
            // retornar a quantidade de marcadores coletados
            return (0);
      } // end pickBeepers( )
      /**
       * doSquare - Metodo para especificar outro percurso.
       */
  
};      // end class MyRobot// --------------------------- acao principal
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
      decorateWorld("Guia0213.txt");
      world->show();
      // preparar o ambiente para uso
      world->reset();
      // limpar configuracoes
      world->read("Guia0213.txt"); // ler configuracao atual para o ambiente
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
      // dar uma pausa na entrada de comandos
      robot->doTask();
      // mostrar configuracao atual do mundo
      world->show();


      world->close();
      // encerrar programa
      getchar();
      return (0);

} // end main ( )
