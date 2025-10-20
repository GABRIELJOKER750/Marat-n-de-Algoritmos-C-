#include <iostream>
#include <cmath>

int main() {
    double cateto1, cateto2;
    std::cout << "Ingrese el primer cateto: ";
    std::cin >> cateto1;
    std::cout << "Ingrese el segundo cateto: ";
    std::cin >> cateto2;

    double hipotenusa = std::sqrt(cateto1 * cateto1 + cateto2 * cateto2);
    std::cout << "La hipotenusa es: " << hipotenusa << std::endl;

    return 0;
}