#include <iostream>

int main() {
    int cantidadNotas;
    std::cout << "Ingrese la cantidad de notas: ";
    std::cin >> cantidadNotas;

    if (cantidadNotas <= 0) {
        std::cout << "Cantidad inválida." << std::endl;
        return 1;
    }

    double suma = 0, nota;
    for (int i = 1; i <= cantidadNotas; i++) {
        std::cout << "Ingrese la nota #" << i << ": ";
        std::cin >> nota;
        if (nota < 0 || nota > 10) {
            std::cout << "Nota inválida." << std::endl;
            return 1;
        }
        suma += nota;
    }

    double promedio = suma / cantidadNotas;
    std::cout << "Promedio: " << promedio << std::endl;

    if (promedio >= 6) {
        std::cout << "Aprobado" << std::endl;
    } else {
        std::cout << "Reprobado" << std::endl;
    }

    return 0;
}