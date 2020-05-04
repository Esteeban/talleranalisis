#include <string.h>
#include <iostream>
#include <string.h>

using namespace std;

void simplificar(string argumento){
    int i=0;
    string condicion1="=>";
    string condicion2="&&";
    string condicion3="~";
    string condicion4="~~";


    while(i==0){ //la variable i la puse solamente para que funcione el ciclo
        string::size_type pos= argumento.find (condicion1, 0); //find busca en argumento lo que esta en condicion1 y devuelve la posición 
        if (pos==string::npos) break; //si no encuentra lo que busca (condicion1) entra al if y ejecuta el break y sale del ciclo
            argumento.replace(pos, 2, condicion2); //pos indica donde esta condicion1, el 2 es para decirle a replace cuantos caracteres tiene que reemplazar y condicion 2 es lo que tiene que pegar en su lugar
            argumento.insert(pos-1, condicion3);
            cout<<argumento<<endl;
        string::size_type pos2 = argumento.find(condicion4,0);
        if(pos2==string::npos)break;
            argumento.replace(pos2,2,"");
            cout<<argumento<<endl;    
    }
    /**
    while(i==0){
        string::size_type pos = argumento.find(condicion4,0);
        if(pos==string::npos)break;
        argumento.replace(pos,2,"");
        cout<<argumento<<endl;
    }*/
}