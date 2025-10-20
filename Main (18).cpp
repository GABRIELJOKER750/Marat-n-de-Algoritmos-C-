#include <iostream>

int main() {
    int num;

    std::cout << "Ingrese un número entero: ";
    while (!(std::cin >> num)) {
        std::cout << "Entrada inválida. Ingrese un número entero: ";
        std::cin.clear(); // limpia el error
        std::cin.ignore(1000, '\n'); // ignora la entrada inválida
    }

    if (num % 2 == 0) {
        std::cout << "El número es par." << std::endl;
    } else {
        std::cout << "El número es impar." << std::endl;
    }

    return 0;
}