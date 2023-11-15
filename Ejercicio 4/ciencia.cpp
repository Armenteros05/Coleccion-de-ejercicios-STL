#include <iostream>

namespace Ciencia {
    namespace Fisica {
        const double VELOCIDAD_DE_LA_LUZ = 299792458; // en metros por segundo

        double energiaDeMasa(double masa) {
            return masa * VELOCIDAD_DE_LA_LUZ * VELOCIDAD_DE_LA_LUZ;
        }
    }
    namespace Quimica {
        const double NUMERO_DE_AVOGADRO = 6.02214076e23; // mol^-1

        double molesDeParticulas(double particulas) {
            return particulas / NUMERO_DE_AVOGADRO;
        }
    }
}

int main() {
    double masa = 0.1; // en kilogramos
    double energia = Ciencia::Fisica::energiaDeMasa(masa);
    std::cout << "Energia de una masa de " << masa << " kg: " << energia << " joules" << std::endl;

    double particulas = 1e24;
    double moles = Ciencia::Quimica::molesDeParticulas(particulas);
    std::cout << particulas << " particulas corresponden a " << moles << " moles" << std::endl;

return 0;
}