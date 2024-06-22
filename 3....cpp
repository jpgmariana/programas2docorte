#include <iostream>

int main() {
    int edad1, edad2, edad3;
    
    // Solicitar al usuario que ingrese las edades de los tres hijos
    std::cout << "Ingrese la edad del primer hijo: ";
    std::cin >> edad1;

    std::cout << "Ingrese la edad del segundo hijo: ";
    std::cin >> edad2;

    std::cout << "Ingrese la edad del tercer hijo: ";
    std::cin >> edad3;

    // Calcular la edad mayor
    int mayor = (edad1 > edad2) ? ((edad1 > edad3) ? edad1 : edad3) : ((edad2 > edad3) ? edad2 : edad3);

    // Calcular la edad menor
    int menor = (edad1 < edad2) ? ((edad1 < edad3) ? edad1 : edad3) : ((edad2 < edad3) ? edad2 : edad3);

    // Calcular la media de las edades
    float media = (edad1 + edad2 + edad3) / 3.0;

    // Mostrar los resultados
    std::cout << "La mayor edad es: " << mayor << std::endl;
    std::cout << "La menor edad es: " << menor << std::endl;
    std::cout << "La media de las edades es: " << media << std::endl;

    return 0;
}
