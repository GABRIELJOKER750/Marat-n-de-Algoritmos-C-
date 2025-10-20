#include <iostream>

int main() {
    double celsius;
    std::cout << "Ingrese la temperatura en grados Celsius: ";
    std::cin >> celsius;

    double fahrenheit = celsius * 9.0 / 5.0 + 32;
    std::cout << "La temperatura en Fahrenheit es: " << fahrenheit << std::endl;

    return 0;
}