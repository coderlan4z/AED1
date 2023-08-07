/*
Guia0110 - v0.0. - __ / __ / _____
Author: ____________________
Para compilar em uma janela de comandos (terminal):
No Linux
: g++ -o Guia0110
No Windows: g++ -o Guia0110
./Guia0110.cpp
Guia0110.cpp
Para executar em uma janela de comandos (terminal):
No Linux
: ./Guia0110
No Windows: Guia0110
*/
// lista de dependencias
#include "karel.hpp" 
#include "myKarel.hpp" 
/**
decorateWorld - Metodo para preparar o cenario.
@param fileName - nome do arquivo para guardar a descricao.
*/
void decorateWorld(const char *fileName)
{
      // colocar paredes no mundo
      world->set(3, 2, HWALL); // horizontal
      world->set(4, 2, HWALL); // horizontal
      world->set(5, 2, HWALL); // horizontal

      world->set(5, 3, VWALL); // vertical
      world->set(5, 4, VWALL); // vertical
      world->set(5, 5, VWALL); // vertical

      world->set(5, 6, HWALL); // horizontal
      world->set(4, 6, HWALL); // horizontal
      world->set(3, 6, HWALL); // horizontal

      world->set(2, 3, VWALL); // vertical
      world->set(2, 4, VWALL); // vertical
      world->set(2, 5, VWALL); // vertical
      world->set(2, 6, VWALL); // vertical

      // colocar um marcador no mundo
      world->set(4, 3, BEEPER);
      world->set(4, 3, BEEPER);
      world->set(4, 3, BEEPER);
      world->set(4, 3, BEEPER);
      world->set(4, 3, BEEPER);
      world->set(4, 3, BEEPER);

      // salvar a configuracao atual do mundo
      world->save(fileName);

} // decorateWorld ( )

void doTask(MyRobot *robot) {
    robot->moveN(5);
    robot->turnLeft();
    robot->moveN(5);
    robot->turnLeft();
    robot->moveN(1);
    robot->turnLeft();
    robot->moveN(3);
    robot->turnRight();
    robot->moveN(1);
    robot->turnRight();
    robot->pickBeepers(6);
    robot->moveN(3);
    robot->turnRight();
    robot->moveN(2);
    robot->turnRight();
    robot->moveN(3);
    robot->putBeepers(1);
    robot->moveN(1);
    robot->turnRight();
    robot->moveN(4);
    robot->turnRight();
    robot->moveN(4);
    robot->putBeepers(1);
    robot->moveN(1);
    robot->turnRight();
    robot->moveN(3);
    robot->putBeepers(3);
    robot->moveN(1);
    robot->turnRight();
    robot->moveN(6);
    robot->turnRight();
    robot->moveN(5);
    robot->turnLeft();
    robot->turnLeft();
    robot->turnOff();
}
// end class MyRobot// --------------------------- acao principal
/**
Acao principal: executar a tarefa descrita acima.
*/
int main()
{
      // definir o contexto
      // criar o ambiente e decorar com objetos
      // OBS.: executar pelo menos uma vez,
      // antes de qualquer outra coisa
      //(depois de criado, podera' ser comentado)

      world->create("");
      // criar o mundo
      decorateWorld("Guia0115.txt");
      world->show();
      // preparar o ambiente para uso
      world->reset();
      // limpar configuracoes
      world->read("Guia0115.txt"); // ler configuracao atual para o ambiente
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
      doTask(robot);
      // encerrar operacoes no ambiente
      world->close();
      // encerrar programa
      getchar();
      return (0);
} // end main ( )
  // ---------------------------------------------- testes
  /*
  ---------------------------------------------- documentacao complementar
  
  ---------------------------------------------- notas / observacoes / comentarios
  
  ---------------------------------------------- previsao de testes
  
  ---------------------------------------------- historico
  
  Versao     Data     Modificacao
  0.1        __/__     esboco
  0.2        __/__     esboco
  0.3        __/__     esboco
  0.4        __/__     esboco
  0.5        __/__     esboco
  0.6        __/__     esboco
  0.7        __/__     esboco
  0.8        __/__     esboco
  0.9        __/__     esboco
  1.0        __/__     esboco
  
  // ---------------------------------------------- testes
  
  // Versao       Teste
  // 0.1          01. ( OK ) teste inicial
  // 0.2          01. ( OK ) teste da tarefa
  // 0.3          01. ( OK ) teste do turnRight
  // 0.4          01. ( OK ) teste do pickBeeper
  // 0.5          01. ( OK ) teste do putBeeper
  // 0.6          01. ( OK ) teste do moveN
  // 0.7          01. ( OK ) teste com marcador na posicao (4,4)
  //              02. ( OK ) teste sem o marcador na posicao (4,4)
  // 0.8          01. ( OK ) teste com a quantidade de marcadores
  // 0.9          01. ( OK ) teste com outra forma de repeticao
  // 1.0          01. ( OK ) teste com outra forma de repeticao
  //              02. ( OK ) teste com forma de repeticao alternativa
  // 1.1          01. ( OK ) teste com exercico 01
  // 1.2          01. ( OK ) teste com exercico 02
  // 1.3          01. ( OK ) teste com exercico 03
  // 1.4          01. ( OK ) teste com exercico 04
  // 1.5          01. ( OK ) teste com exercico 05
  // 1.6          01. ( OK ) teste com exercico Extra 01
  */