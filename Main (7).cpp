#include <iostream>
#include <cmath>

int main() {
    int opcion;
    std::cout << "Calculadora de áreas\n";
    std::cout << "1. Círculo\n2. Rectángulo\n3. Triángulo\n";
    std::cout << "Ingrese la opción (1-3): ";
    std::cin >> opcion;

    if (opcion == 1) {
        double radio;
        std::cout << "Ingrese el radio del círculo: ";
        std::cin >> radio;
        double area = M_PI * radio * radio;
        std::cout << "El área del círculo es: " << area << std::endl;
    }
    else if (opcion == 2) {
        double base, altura;
        std::cout << "Ingrese la base del rectángulo: ";
        std::cin >> base;
        std::cout << "Ingrese la altura del rectángulo: ";
        std::cin >> altura;
        double area = base * altura;
        std::cout << "El área del rectángulo es: " << area << std::endl;
    }
    else if (opcion == 3) {
        double base, altura;
        std::cout << "Ingrese la base del triángulo: ";
        std::cin >> base;
        std::cout << "Ingrese la altura del triángulo: ";
        std::cin >> altura;
        double area = (base * altura) / 2;
        std::cout << "El área del triángulo es: " << area << std::endl;
    }
    else {
        std::cout << "Opción inválida" << std::endl;
    }

    return 0;
}
