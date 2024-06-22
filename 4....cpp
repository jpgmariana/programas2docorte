#include <iostream>

int main() {
    int puntuacion1, puntuacion2, puntuacion3, puntuacion4;
    
    // Solicitar al usuario que ingrese las cuatro puntuaciones
    std::cout << "Ingrese la primera puntuacion: ";
    std::cin >> puntuacion1;

    std::cout << "Ingrese la segunda puntuacion: ";
    std::cin >> puntuacion2;

    std::cout << "Ingrese la tercera puntuacion: ";
    std::cin >> puntuacion3;

    std::cout << "Ingrese la cuarta puntuacion: ";
    std::cin >> puntuacion4;

    // Calcular la media de las puntuaciones
    float media = (puntuacion1 + puntuacion2 + puntuacion3 + puntuacion4) / 4.0;

    // Mostrar la media
    std::cout << "La media de las puntuaciones es: " << media << std::endl;

    // Visualizar la tabla de notas según las medias
    std::cout << "Tabla de Notas:" << std::endl;
    if (media >= 90) {
        std::cout << "Nota: A" << std::endl;
    } else if (media >= 80) {
        std::cout << "Nota: B" << std::endl;
    } else if (media >= 70) {
        std::cout << "Nota: C" << std::endl;
    } else if (media >= 60) {
        std::cout << "Nota: D" << std::endl;
    } else {
        std::cout << "Nota: E" << std::endl;
    }

    return 0;
}
