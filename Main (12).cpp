#include <iostream>

int main() {
    int totalSegundos;
    std::cout << "Ingrese el total de segundos: ";
    std::cin >> totalSegundos;

    if (totalSegundos < 0) {
        std::cout << "Cantidad inválida." << std::endl;
        return 1;
    }

    int horas = totalSegundos / 3600;
    int minutos = (totalSegundos % 3600) / 60;
    int segundos = totalSegundos % 60;

    std::cout << "Tiempo convertido: " << horas << "h:" << minutos << "m:" << segundos << "s\n";

    return 0;
}