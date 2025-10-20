#include <iostream>
#include <vector>

int main() {
    std::vector<double> notas;
    double nota;
    
    std::cout << "Ingrese notas entre 0 y 10. Ingrese -1 para terminar.\n";
    
    while (true) {
        std::cout << "Ingrese una nota: ";
        std::cin >> nota;

        if (nota == -1) {
            break;
        }

        if (nota < 0 || nota > 10) {
            std::cout << "Nota inválida, intente de nuevo." << std::endl;
            continue;
        }

        notas.push_back(nota);
    }

    if (notas.empty()) {
        std::cout << "No se ingresaron notas." << std::endl;
        return 0;
    }

    double suma = 0;
    for (double n : notas) {
        suma += n;
    }

    double promedio = suma / notas.size();
    std::cout << "Cantidad de notas ingresadas: " << notas.size() << std::endl;
    std::cout << "Promedio: " << promedio << std::endl;

    if (promedio >= 6) {
        std::cout << "Aprobado" << std::endl;
    } else {
        std::cout << "Reprobado" << std::endl;
    }

    return 0;
}
