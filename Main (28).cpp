#include <iostream>
#include <vector>

int main() {
    int cantidadNotas;
    std::cout << "Ingrese la cantidad de notas: ";
    std::cin >> cantidadNotas;

    if (cantidadNotas <= 0) {
        std::cout << "Cantidad inválida." << std::endl;
        return 1;
    }

    std::vector<double> notas(cantidadNotas);
    double suma = 0;

    for (int i = 0; i < cantidadNotas; i++) {
        do {
            std::cout << "Ingrese la nota #" << (i + 1) << " (0 a 10): ";
            std::cin >> notas[i];
            if (notas[i] < 0 || notas[i] > 10) {
                std::cout << "Nota inválida, intente de nuevo." << std::endl;
            }
        } while (notas[i] < 0 || notas[i] > 10);
        suma += notas[i];
    }

    double promedioGeneral = suma / cantidadNotas;

    double sumaFiltrada = 0;
    int contadorFiltrado = 0;

    for (double n : notas) {
        if (n >= promedioGeneral) {
            sumaFiltrada += n;
            contadorFiltrado++;
        }
    }

    if (contadorFiltrado == 0) {
        std::cout << "Ninguna nota está por encima o igual al promedio general." << std::endl;
    } else {
        double promedioFiltrado = sumaFiltrada / contadorFiltrado;
        std::cout << "Promedio general: " << promedioGeneral << std::endl;
        std::cout << "Promedio excluyendo notas por debajo del promedio general: " << promedioFiltrado << std::endl;
    }

    return 0;
}