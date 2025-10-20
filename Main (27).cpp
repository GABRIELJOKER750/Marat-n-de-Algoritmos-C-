#include <iostream>
#include <vector>
#include <algorithm>  // Para std::sort

int main() {
    int cantidadNotas;
    std::cout << "Ingrese la cantidad de notas: ";
    std::cin >> cantidadNotas;

    if (cantidadNotas <= 0) {
        std::cout << "Cantidad inválida." << std::endl;
        return 1;
    }

    std::vector<double> notas;
    double nota;

    for (int i = 1; i <= cantidadNotas; i++) {
        do {
            std::cout << "Ingrese la nota #" << i << " (0 a 10): ";
            std::cin >> nota;
            if (nota < 0 || nota > 10) {
                std::cout << "Nota inválida, intente de nuevo." << std::endl;
            }
        } while (nota < 0 || nota > 10);
        notas.push_back(nota);
    }

    // Ordenar las notas de menor a mayor
    std::sort(notas.begin(), notas.end());

    // Mostrar las notas ordenadas
    std::cout << "\nNotas ordenadas de menor a mayor:\n";
    for (double n : notas) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}
