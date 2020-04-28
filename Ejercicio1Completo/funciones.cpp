#include <iostream>
#include <cstdlib>
#include <string.h>
#include "funciones.h"


bool validadatos(string alfabeto)
{ // Funcion Validadatos solo puede recibir caracteres: a,o,b,*
    int longitud = 0;
    longitud = alfabeto.length();
    for (int i = 0; i<longitud; i++)
    {
        if (alfabeto[i] != ('a') && alfabeto[i] != ('b') && alfabeto[i] != ('o') && alfabeto[i] != ('*'))
        {
            return false;
        }
    }
    return true;
}

bool validacondicion(string alfabeto)
{ // Funcion Validacondicion condiciona que comienze con 'a' y no contenga '*'
    int longitud = 0;
    longitud = alfabeto.length();
    if (alfabeto[0] != ('a'))
    {
        return false;
    }
    else
    {
        for (int i = 1; i < longitud; i++)
        {
            if (alfabeto[i] == ('*'))
            {
                return false;
            }
        }
    }
    return true;
}