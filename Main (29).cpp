#include <iostream>
#include <cmath>

double potencia(double base, double exponente) { return pow(base, exponente); }
double raiz(double numero) { return numero >= 0 ? sqrt(numero) : -1; }

int main() {
    int opcion;
    double num1, num2;

    std::cout << "1. Potencia\n2. Raíz Cuadrada\n";
    std::cout << "Seleccione opción: ";
    std::cin >> opcion;

    if (opcion == 1) {
        std::cout << "Base: ";
        std::cin >> num1;
        std::cout << "Exponente: ";
        std::cin >> num2;
        std::cout << "Resultado: " << potencia(num1, num2) << std::endl;
    } else if (opcion == 2) {
        std::cout << "Número: ";
        std::cin >> num1;
        double resultado = raiz(num1);
        if (resultado == -1)
            std::cout << "Error: No se puede calcular raíz de un número negativo." << std::endl;
        else
            std::cout << "Resultado: " << resultado << std::endl;
    } else {
        std::cout << "Opción no válida." << std::endl;
    }

    return 0;
}