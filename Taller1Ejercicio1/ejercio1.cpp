#include <iostream>
#include "funciones.h"
#include <cstdlib>

using namespace std;

int main() {
char caracteres[50];
cout<<"Ingrese Caracteres: "<<endl;
cin>>caracteres;
if(validadatos(caracteres)==true){
    cout<<"Los datos ingresados SON validos para el lenguaje"<<endl;
    if (validacondicion(caracteres)==true){
        cout<<"SI cumple la Condicion para el lenguaje "<<endl;
         }
    else{
        cout<<"NO cumple la condicion para el lenguaje "<<endl;
    }
}
    else{
        cout<<"Los datos ingresados NO SON validos para el lenguaje "<<endl;
    }
   return 0;
}







