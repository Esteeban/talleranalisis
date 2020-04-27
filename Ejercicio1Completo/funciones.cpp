#include <iostream>
#include <cstdlib>
#include <string.h>
#include "funciones.h"

bool validadatos(char alfabeto[50])
{ // SOLO PUEDE RECIBIR a,b,o,*
    int longitud = 0;
    longitud = strlen(alfabeto);
    int i = 0;
    //cout<<"\n el largo de chharacteres es: "<<longitud<<endl;    <-- muestra el largo de caracteres
    for (size_t i = 0; i < longitud; i++)
    {
        //cout<<" el dato numero "<<i<<" es: "<<alfabeto[i]<<endl; <-- muestra mi contador
        if (alfabeto[i] != ('a') && alfabeto[i] != ('b') && alfabeto[i] != ('o') && alfabeto[i] != ('*'))
        {
            return false;
        }
    }
    return true;
}

bool validacondicion(char alfabeto[50])
{ // COMIENZA CON a Y NO PUEDE CONTENER *
    int longitud = 0;
    longitud = strlen(alfabeto);
    int i = 0;
    if (alfabeto[0] != ('a'))
    {
        return false;
    }
    else
    {
        for (size_t i = 1; i < longitud; i++)
        {
            if (alfabeto[i] == ('*'))
            {
                return false;
            }
        }
    }
    return true;
}