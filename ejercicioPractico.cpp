#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string linea;
    int contador=0;

    ifstream leer("archivo.txt");

    if(leer.is_open()){
        while(getline(leer,linea)){
            contador++;
        }
        cout<<"Cantidad de lineas: "<<contador<<endl;
        leer.close();
    }
    else{
        cout<<"Error: el archivo no existe"<<endl;
    }
    return 0;
}