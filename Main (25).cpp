#include <iostream>
#include <cmath>  // para sqrt y pow

int main() {
    int cantidadNotas;
    std::cout << "Ingrese la cantidad de notas: ";
    std::cin >> cantidadNotas;

    if (cantidadNotas <= 0) {
        std::cout << "Cantidad inválida." << std::endl;
        return 1;
    }

    double* notas = new double[cantidadNotas];
    double suma = 0;

    // Pedir notas con validación
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

    double promedio = suma / cantidadNotas;

    // Calcular la suma de los cuadrados de la diferencia
    double sumaDiferenciasCuadradas = 0;
    for (int i = 0; i < cantidadNotas; i++) {
        sumaDiferenciasCuadradas += pow(notas[i] - promedio, 2);
    }

    double desviacionEstandar = sqrt(sumaDiferenciasCuadradas / cantidadNotas);

    std::cout << "Promedio: " << promedio << std::endl;
    std::cout << "Desviación estándar: " << desviacionEstandar << std::endl;

    delete[] notas;
    return 0;
}