#include <iostream>

double suma(double a, double b) { return a + b; }
double resta(double a, double b) { return a - b; }
double multiplicacion(double a, double b) { return a * b; }
double division(double a, double b) { return b != 0 ? a / b : 0; }

int main() {
    int opcion;
    double num1, num2;

    std::cout << "Calculadora básica\n";
    std::cout << "1. Suma\n2. Resta\n3. Multiplicación\n4. División\n";
    std::cout << "Seleccione opción: ";
    std::cin >> opcion;

    std::cout << "Ingrese primer número: ";
    std::cin >> num1;
    std::cout << "Ingrese segundo número: ";
    std::cin >> num2;

    switch(opcion) {
        case 1:
            std::cout << "Resultado: " << suma(num1, num2) << std::endl;
            break;
        case 2:
            std::cout << "Resultado: " << resta(num1, num2) << std::endl;
            break;
        case 3:
            std::cout << "Resultado: " << multiplicacion(num1, num2) << std::endl;
            break;
        case 4:
            if (num2 == 0)
                std::cout << "Error: División entre cero." << std::endl;
            else
                std::cout << "Resultado: " << division(num1, num2) << std::endl;
            break;
        default:
            std::cout << "Opción no válida." << std::endl;
    }

    return 0;
}