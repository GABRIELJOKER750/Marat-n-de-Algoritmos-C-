#include <iostream>

int main() {
    int cantidadNotas;
    std::cout << "Ingrese la cantidad de notas: ";
    std::cin >> cantidadNotas;

    if (cantidadNotas <= 0) {
        std::cout << "Cantidad inválida." << std::endl;
        return 1;
    }

    double nota;
    int rango_0_3 = 0, rango_4_5 = 0, rango_6_7 = 0, rango_8_10 = 0;

    for (int i = 1; i <= cantidadNotas; i++) {
        do {
            std::cout << "Ingrese la nota #" << i << " (0 a 10): ";
            std::cin >> nota;
            if (nota < 0 || nota > 10) {
                std::cout << "Nota inválida, intente de nuevo." << std::endl;
            }
        } while (nota < 0 || nota > 10);

        if (nota >= 0 && nota <= 3)
            rango_0_3++;
        else if (nota >= 4 && nota <= 5)
            rango_4_5++;
        else if (nota >= 6 && nota <= 7)
            rango_6_7++;
        else if (nota >= 8 && nota <= 10)
            rango_8_10++;
    }

    std::cout << "\nHistograma de notas:\n";
    std::cout << "0-3:   ";
    for (int i = 0; i < rango_0_3; i++) std::cout << "*";
    std::cout << "\n4-5:   ";
    for (int i = 0; i < rango_4_5; i++) std::cout << "*";
    std::cout << "\n6-7:   ";
    for (int i = 0; i < rango_6_7; i++) std::cout << "*";
    std::cout << "\n8-10:  ";
    for (int i = 0; i < rango_8_10; i++) std::cout << "*";
    std::cout << std::endl;

    return 0;
}
