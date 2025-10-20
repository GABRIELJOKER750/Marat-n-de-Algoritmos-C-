#include <iostream>
#include <string>

int main() {
    std::string frase;
    std::cout << "Ingrese una frase: ";
    std::getline(std::cin, frase);

    int contadorVocales = 0;
    for (char c : frase) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contadorVocales++;
        }
    }

    std::cout << "Número de vocales: " << contadorVocales << std::endl;

    return 0;
}
