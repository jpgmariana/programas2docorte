#include <iostream>

int main() {
    int limiteMaximo, base;
    
    // Solicitar al usuario que ingrese el límite máximo y la base
    std::cout << "Ingrese el limite maximo entero positivo: ";
    std::cin >> limiteMaximo;

    std::cout << "Ingrese la base entera positiva: ";
    std::cin >> base;

    // Calcular y visualizar las potencias de la base menores que el límite máximo
    int potencia = 1;
    while (potencia < limiteMaximo) {
        std::cout << potencia << " ";
        potencia *= base;
    }

    std::cout << "\n";

    return 0;
}
