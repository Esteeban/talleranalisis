#include <iostream>
#include <cstdlib>
#include <string.h>


using namespace std;


bool validadatos(char alfabeto[50]);
bool validacondicion(char alfabeto[50]);

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

bool validadatos(char alfabeto[50]){  // SOLO PUEDE RECIBIR a,b,o,*
    int longitud=0;
    longitud=strlen(alfabeto);
    int i=0;
    //cout<<"\n el largo de chharacteres es: "<<longitud<<endl;    <-- muestra el largo de caracteres
    for (size_t i = 0; i <longitud; i++){
        //cout<<" el dato numero "<<i<<" es: "<<alfabeto[i]<<endl; <-- muestra mi contador
        if(alfabeto[i]!=('a') && alfabeto[i]!=('b') && alfabeto[i]!=('o') && alfabeto[i]!=('*')){
            return false;
        }
    }
    return true;
}

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



