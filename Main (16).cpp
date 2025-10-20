#include <iostream>

int main() {
    double ancho, alto;
    std::cout << "Ingrese el ancho del rectángulo: ";
    std::cin >> ancho;
    std::cout << "Ingrese el alto del rectángulo: ";
    std::cin >> alto;

    if (ancho <= 0 || alto <= 0) {
        std::cout << "Los valores deben ser positivos." << std::endl;
    } else {
        double area = ancho * alto;
        double perimetro = 2 * (ancho + alto);
        std::cout << "Área: " << area << std::endl;
        std::cout << "Perímetro: " << perimetro << std::endl;
    }

    return 0;