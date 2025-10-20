#include <iostream>

int main() {
    int a, b, c;
    std::cout << "Ingrese tres números:\n";
    std::cin >> a >> b >> c;

    // Ordenar usando condicionales
    int max, mid, min;

    if (a >= b && a >= c) {
        max = a;
        if (b >= c) {
            mid = b; min = c;
        } else {
            mid = c; min = b;
        }
    } else if (b >= a && b >= c) {
        max = b;
        if (a >= c) {
            mid = a; min = c;
        } else {
            mid = c; min = a;
        }
    } else {
        max = c;
        if (a >= b) {
            mid = a; min = b;
        } else {
            mid = b; min = a;
        }
    }

    std::cout << "Orden de mayor a menor: " << max << ", " << mid << ", " << min << std::endl;

    return 0;
}