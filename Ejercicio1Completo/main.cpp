#include <iostream>
#include <cstdlib>
#include <string.h>
#include "funciones.h"

using namespace std;

/**
 * Función que muestra los participantes del grupo
 */
void participantes();

/**
 * Taller computacional
 * @param argc cantidad de argumentos
 * @param argv argumentos
 * @return El código de salida del programa
 */
int main(int argc, char **argv)
{

    /**
     * Incluir acá la lógica del programa
     * 
     */
    if (argc > 1)
    {
        std::string argumento(argv[1]);
        bool cumple= validacondicion(( char *)argumento.c_str());
        bool sirve= validadatos((char *)argumento.c_str());

        if ((cumple)&&(sirve))
        {
            std::cout << std::endl
                      << "SI cumple la condición" << std::endl;
        }
        else
        {
            std::cout << std::endl
                      << "NO cumple la condición " << std::endl;
        }
       
    }
    else
    {
        // Mostrar los integrantes
        participantes();
    }
    return EXIT_SUCCESS;
}

void participantes()
{
    std::cout << std::endl
              << "=== Taller 01 ===" << std::endl;
    std::cout << std::endl
              << "Andres Muñoz Gonzalez"; // Reemplazar por su nombre
    std::cout << std::endl
              << "Esteban Rojas Rojas"; // Reemplazar por su nombre
    std::cout << std::endl
              << "Ignacio Valdebonito Aldana" << std::endl; // Reemplazar por su nombre
}
