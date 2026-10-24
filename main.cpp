#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;
int main (){
    ifstream ArchivoEntrada("input/ArchivoEntrada.txt");

    if (ArchivoEntrada.is_open()) {
        cout<<"Archivo abierto"<<endl;
        string linea;

        while (getline(ArchivoEntrada, linea)) {

        }
    }
}
