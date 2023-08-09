/*
Guia_0211 - v0.0. - __ / __ / _____
Author: _____________________
Para compilar em uma janela de comandos (terminal):
No Linux
: g++ -o Guia0211
No Windows: g++ -o Guia0211
./Guia0201.cpp
Guia0201.cpp
Para executar em uma janela de comandos (terminal):
No Linux
: ./Guia0201
No Windows: Guia0211
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
      world->set(2, 1, VWALL);
      world->set(3, 1, HWALL);
      world->set(3, 2, VWALL);
      world->set(4, 2, HWALL);
      world->set(4, 3, VWALL);
      world->set(5, 3, HWALL);
      world->set(6, 3, HWALL);
      world->set(6, 3, VWALL);
      world->set(7, 2, HWALL);
      world->set(7, 2, VWALL);
      world->set(8, 1, HWALL);
      world->set(8, 1, VWALL);

      // colocar um marcador no mundo
      world->set(9, 1, BEEPER);
      world->set(8, 2, BEEPER);
      world->set(8, 2, BEEPER);
      world->set(7, 3, BEEPER);
      world->set(7, 3, BEEPER);
      world->set(7, 3, BEEPER);

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
     void stepUpRight( ){
           while (!facingNorth())
                  {
                        turnLeft();
                  } // end while
                  moveN(1);
                  turnRight();
                  moveN(1);
                  turnLeft();
     }
     void stepDownRight(){
             while (!facingSouth())
                     {
                            turnLeft();
                     } // end while
                     moveN(1);
                     turnRight();

     }
     void stepUpLeft( ){
             while (!facingNorth())
                     {
                            turnLeft();
                     } // end while
                     moveN(1);
                     turnLeft();
                     moveN(1);
                     turnRight();
     }
     void stepDownLeft(){
             while (!facingSouth())
                     {
                            turnLeft();
                     } // end while
                     moveN(1);
                     turnLeft();
                     moveN(1);
                     turnRight();
     }
      void doTask()
      {
            moveN(1);
            stepUpRight();
            stepUpRight();
            stepUpRight();
            turnRight();
            moveN(2);
            stepDownLeft();
            stepDownLeft();
            stepDownLeft();
            turnRight();
            moveN(1);
            pickBeepers();
            stepUpLeft();
            pickBeepers(2);
            stepUpLeft();
            pickBeepers(3);
            stepUpLeft();
            turnLeft();
            moveN(2);
            stepDownRight();
            putBeepers(3);
            moveN(1);
            stepDownRight();
            putBeepers(2);
            moveN(1);
            stepDownRight();
            putBeepers(1);
            moveN(1);
            faceEast();
            turnOff();
      } // end doTask( )

      /*
            putBeepers - Funcao para colocar marcadores.
            @param n - numero de marcadores a serem colocados
      */
     int putBeepers(int n = 0)
     {
            while ( n > 0  )
            {
                  putBeeper();
                  n = n - 1;
            }
            return (n);
            
     }

      /**
       * pickBeepers - Funcao para coletar marcadores.
       * @return quantidade de marcadores coletados
       */
      int pickBeepers(int n = 0)
      {
            // enquanto houver marcador proximo
            while (nextToABeeper())
            {
                  // coletar um marcador
                  pickBeeper();
                  // contar mais um marcador coletado
                  n = n + 1;
            } // end while
            // retornar a quantidade de marcadores coletados
            return (n);
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
      decorateWorld("Guia0211.txt");
      world->show();
      // preparar o ambiente para uso
      world->reset();
      // limpar configuracoes
      world->read("Guia0211.txt"); // ler configuracao atual para o ambiente
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

