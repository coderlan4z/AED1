//NAO ENTENDI ESSA TAREFA MUITO BEM, FIZ SOMENTE PARA EXECUTAR OS COMANDOS DO ARQUIVO TAREFA001.TXT. MAS NAO SAO NECESSARIAMENTE COMANDOS DO KAREL, POREM MESMO ASSIM NAO CONSEGUI FAZER FUNCIONAR.

#include <iostream>
#include <cstdio>

int main()
{
      FILE *file = fopen("teste.txt", "r");

      int numCommands;
      fscanf(file, "%d", &numCommands);

      char command[100];

      for (int i = 0; i < numCommands; ++i)
      {
            fscanf(file, "%s", command);
            system(command);
            std::cout << "Executando o comando: " << command << std::endl;
      }

      fclose(file);

      return 0;
}
