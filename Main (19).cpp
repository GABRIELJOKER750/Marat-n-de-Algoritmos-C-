#include <iostream>
#include <cmath> // Para M_PI

int main() {
    double radio;
    std::cout << "Ingrese el radio del círculo: ";
    std::cin >> radio;

    if (radio <= 0) {
        std::cout << "Error: El radio debe ser un número positivo." << std::endl;
    } else {
        double area = M_PI * radio * radio;
        std::cout << "El área del círculo es: " << area << std::endl;
    }

    return 0;
}