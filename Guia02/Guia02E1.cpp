#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inputFile("teste.txt");

    int countLine = 0;
    for (std::string linha; std::getline(inputFile, linha); ++countLine) {}

    inputFile.close();

    std::cout << "O número de linhas no arquivo é: " << countLine << std::endl;

    return 0;
}
