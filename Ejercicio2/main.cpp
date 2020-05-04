#include <iostream>
#include <cstdlib>
#include <string.h>
#include "funciones.h"

using namespace std;

void participantes();

/**
 * Taller computacional
 * @param argc cantidad de argumentos
 * @param argv argumentos
 * @return El código de salida del programa
 */
int main(int argc, char **argv)
{
    if (argc > 1)
    {
        std::cout << std::endl
            << "== Expresion simplificada ==" << std::endl;
        std::string argumento(argv[1]);
        simplificar(argumento); 
        participantes();  
    }
    else
    {
        participantes();
    }
    return EXIT_SUCCESS;
}

void participantes()
{
    std::cout << std::endl
              << "=== Taller 01 ===" << std::endl;
    std::cout << std::endl
              << "=== Simplificacion Logica===" << std::endl;
    std::cout << std::endl
              << "Andres Muñoz Gonzalez";
    std::cout << std::endl
              << "Esteban Rojas Rojas";
    std::cout << std::endl
              << "Ignacio Valdebenito Aldana" << std::endl;
}
