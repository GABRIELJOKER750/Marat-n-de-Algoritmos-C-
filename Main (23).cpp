#include <iostream>

int main() {
    int cantidadNotas;
    std::cout << "Ingrese la cantidad de notas: ";
    std::cin >> cantidadNotas;

    if (cantidadNotas <= 0) {
        std::cout << "Cantidad inválida." << std::endl;
        return 1;
    }

    double* notas = new double[cantidadNotas];
    double* pesos = new double[cantidadNotas];
    double sumaPesos = 0;

    // Entrada de notas
    for (int i = 0; i < cantidadNotas; i++) {
        do {
            std::cout << "Ingrese la nota #" << (i + 1) << " (0 a 10): ";
            std::cin >> notas[i];
            if (notas[i] < 0 || notas[i] > 10) {
                std::cout << "Nota inválida, intente de nuevo." << std::endl;
            }
        } while (notas[i] < 0 || notas[i] > 10);
    }

    // Entrada de pesos, la suma debe ser 1
    do {
        sumaPesos = 0;
        for (int i = 0; i < cantidadNotas; i++) {
            std::cout << "Ingrese el peso para la nota #" << (i + 1) << " (decimal entre 0 y 1): ";
            std::cin >> pesos[i];
            if (pesos[i] < 0 || pesos[i] > 1) {
                std::cout << "Peso inválido, intente de nuevo." << std::endl;
                i--;  // repetir esta posición
                continue;
            }
            sumaPesos += pesos[i];
        }

        if (sumaPesos != 1) {
            std::cout << "La suma de los pesos debe ser 1. Intente de nuevo." << std::endl;
        }
    } while (sumaPesos != 1);

    // Calcular promedio ponderado
    double promedioPonderado = 0;
    for (int i = 0; i < cantidadNotas; i++) {
        promedioPonderado += notas[i] * pesos[i];
    }

    std::cout << "Promedio ponderado: " << promedioPonderado << std::endl;

    if (promedioPonderado >= 6) {
        std::cout << "Aprobado" << std::endl;
    } else {
        std::cout << "Reprobado" << std::endl;
    }

    delete[] notas;
    delete[] pesos;

    return 0;
}