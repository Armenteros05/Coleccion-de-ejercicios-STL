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
