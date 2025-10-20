#include <iostream>
using namespace std;

int main() {
    float grados;
    char tipo;
    cout << "Ingresa el tipo de conversion (C para Celsius a Fahrenheit, F para Fahrenheit a Celsius): ";
    cin >> tipo;
    cout << "Ingresa los grados: ";
    cin >> grados;

    if (tipo == 'C' || tipo == 'c') {
        cout << grados << "°C = " << (grados * 9 / 5) + 32 << "°F" << endl;
    } else if (tipo == 'F' || tipo == 'f') {
        cout << grados << "°F = " << (grados - 32) * 5 / 9 << "°C" << endl;
    } else {
        cout << "Opcion invalida" << endl;
    }
    return 0;
}