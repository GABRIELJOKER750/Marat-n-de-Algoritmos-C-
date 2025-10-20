#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(nullptr)); // Inicializar semilla
    int numeroSecreto = std::rand() % 100 + 1; // 1 a 100
    int intento;
    int intentos = 0;

    std::cout << "Adivina el número entre 1 y 100\n";

    do {
        std::cout << "Ingrese su intento: ";
        std::cin >> intento;
        intentos++;

        if (intento < numeroSecreto) {
            std::cout << "Muy bajo\n";
        } else if (intento > numeroSecreto) {
            std::cout << "Muy alto\n";
        } else {
            std::cout << "¡Correcto! Lo adivinaste en " << intentos << " intentos.\n";
        }
    } while (intento != numeroSecreto);

    return 0;
}