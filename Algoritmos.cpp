/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <iomanip>

int main() {
    std::string tipo_demonio;
    float distancia;

    std::getline(std::cin, tipo_demonio);
    std::cin >> distancia;

    int velocidad = 0;

    if (tipo_demonio == "Zombieman") {
        velocidad = 5;
    } else if (tipo_demonio == "Imp") {
        velocidad = 10;
    } else if (tipo_demonio == "Baron of Hell") {
        velocidad = 3;
    }

    if (velocidad == 0) {
        std::cout << "Tipo de demonio no válido" << std::endl;
    } else {
        float tiempo = distancia / velocidad;
        std::cout << "Tiempo: " << std::fixed << std::setprecision(2) << tiempo << " segundos" << std::endl;
    }

    return 0;
}
