#include <iostream>

int main() {
    int numero;
    std::cout << "Ingrese un número entero positivo: ";
    std::cin >> numero;

    if (numero <= 1) {
        std::cout << "El número no es primo." << std::endl;
        return 0;
    }

    bool esPrimo = true;
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            esPrimo = false;
            break;
        }
    }

    if (esPrimo) {
        std::cout << numero << " es primo." << std::endl;
    } else {
        std::cout << numero << " no es primo." << std::endl;
    }

    return 0;
}