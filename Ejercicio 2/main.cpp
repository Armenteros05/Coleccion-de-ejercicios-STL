#include <iostream>
#include "cmath"
#include "cuadrado.cpp"
#include "triangulo.cpp"
#include "circulo.cpp"
#include "rectangulo.cpp"
#include "hexagono.cpp"

int main() {
    std::cout << "Area del triangulo: " << Geometria::calcularAreaTriangulo(5, 3) << std::endl;
    std::cout << "Area del circulo: " << Geometria::calcularAreaCirculo(3) << std::endl;
    std::cout << "Area del cuadrado: " << Geometria::calcularAreaCuadrado(3) << std::endl;
    std::cout << "Area del rectangulo: " << Geometria::calcularAreaRectangulo(3, 4) << std::endl;
    std::cout << "Area del hexagono: " << Geometria::calcularAreaHexagono(3, 4, 5) << std::endl;

    return 0;
}

