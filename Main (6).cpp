#include <iostream>

int main() {
    double capital, tasa, tiempo;
    std::cout << "Ingrese el capital inicial: ";
    std::cin >> capital;
    std::cout << "Ingrese la tasa de interés (en %): ";
    std::cin >> tasa;
    std::cout << "Ingrese el tiempo (en años): ";
    std::cin >> tiempo;

    double interes = capital * (tasa / 100) * tiempo;
    std::cout << "El interés generado es: " << interes << std::endl;

    return 0;
}