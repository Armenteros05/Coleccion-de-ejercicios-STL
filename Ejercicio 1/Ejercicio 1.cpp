#include <iostream>

using namespace std;

namespace Matematicas {
    int suma(int a, int b) {
        return a + b;
    }

    int resta(int a, int b) {
        return a - b;
    }

    int multiplicacion(int a, int b) {
        return a * b;
    }

    float division(int a, int b) {
        if (b != 0) {
            return static_cast<float>(a) / b;
        } else {
            cerr << "Error: División por cero." << endl;
            return 0;
        }
    }

    int cuadrado(int a) {
        return a * a;
    }
}

int main() {
    cout << "Los valores de a y b son 5 y 3, respectivamente." << endl;
    cout << "Suma: " << Matematicas::suma(5, 3) << endl;
    cout << "Resta: " << Matematicas::resta(5, 3) << endl;
    cout << "Multiplicacion: " << Matematicas::multiplicacion(5, 3) << endl;

    int divisor = 3;
    cout << "Division: " << Matematicas::division(5, divisor) << endl;

    int base = 2;
    cout << "Cuadrado: " << Matematicas::cuadrado(base) << endl;

    return 0;
}