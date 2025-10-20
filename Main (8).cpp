#include <iostream>

int main() {
    double peso, altura;
    std::cout << "Ingrese su peso en kilogramos: ";
    std::cin >> peso;
    std::cout << "Ingrese su altura en metros: ";
    std::cin >> altura;

    double imc = peso / (altura * altura);
    std::cout << "Su IMC es: " << imc << std::endl;

    if (imc < 18.5) {
        std::cout << "Bajo peso" << std::endl;
    }
    else if (imc >= 18.5 && imc < 25) {
        std::cout << "Peso normal" << std::endl;
    }
    else if (imc >= 25 && imc < 30) {
        std::cout << "Sobrepeso" << std::endl;
    }
    else {
        std::cout << "Obesidad" << std::endl;
    }

    return 0;
}