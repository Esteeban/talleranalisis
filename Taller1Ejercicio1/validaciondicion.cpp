#include "funciones.h"
#include <string.h>

bool validacondicion(char alfabeto[50]){  //COMIENZA CON A Y NO CONTIENE *
    int longitud=0;
    longitud=strlen(alfabeto);
    int i=0;
    if(alfabeto[0]!=('a')){
    return false;
    }
    else{
        for (size_t i = 1; i <longitud; i++){
         if (alfabeto[i]==('*')){
            return false;
        }
    }
    }
     return true;
} 