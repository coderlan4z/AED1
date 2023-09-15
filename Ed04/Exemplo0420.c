/*
Exemplo0420 - v0.0. - __ / __ / _____
Author: Guilherme Lana
*/
// dependencias
#include "io.h"
#include <stdbool.h>
// para definicoes proprias
/**
Method_00 - nao faz nada.
*/
void method_00(void)
{
    // nao faz nada
} // end method_00 ( )




int main()
{
    // definir dado
    int x = 0;
    // repetir até desejar parar
    do
    {
        // identificar
        IO_id("EXEMPLO0321 - Programa - v0.0");
        // ler do teclado
        IO_println("Opcoes");
        IO_println("0 - parar");
        IO_println("1 - Method_11");
        IO_println("2 - Method_12");
        IO_println("3 - Method_13");
        IO_println("4 - Method_14");
        IO_println("5 - Method_15");
        IO_println("6 - Method_16");
        IO_println("7 - Method_17");
        IO_println("8 - Method_18");
        IO_println("9 - Method_19");
        IO_println("10 - Method_20");
        IO_println("11 - Extra01");
        IO_println("12 - Extra02");
        IO_println("");
        x = IO_readint("Entrar com uma opcao: ");
        // testar valor
        switch (x)
        {
        case 1:
            method_11();
            break;
        case 2:
            method_12();
            break;
        case 3:
            method_13();
            break;
        case 4:
            method_14();
            break;
        case 5:
            method_15();
            break;
        case 6:
            method_16();
            break;
        case 7:
            method_17();
            break;
        case 8:
            method_18();
            break;
        case 9:
            method_19();
            break;
        case 10:
            method_20();
            break;
        case 11:
            extra01();
            break;
        case 12:
            extra02();
            break;
        default:
            IO_pause(IO_concat("Valor diferente das opcoes [0,1,2,3,4,5,6,7,8,9,10,11,12] (",
                               IO_concat(IO_toString_d(x), ")")));
        } // end switch
    } while (x != 0);
    // encerrar
    IO_pause("Apertar ENTER para terminar");
    return (0);
} // end main ( )
  /*
  ---------------------------------------------- documentacao complementar
  ---------------------------------------------- notas / observacoes / comentarios
  ---------------------------------------------- previsao de testes
  a.) -1
  b.) 0
  c.) 5 e { 1, 2, 3, 4, 5 }
  ---------------------------------------------- historico
  Versao
  0.1
  Data
  __/__
  Modificacao
  esboco
  ---------------------------------------------- testes
  Versao
  0.1
  Teste
  01. ( OK )
  identificacao de programa
  */