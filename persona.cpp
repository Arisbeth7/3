#include <iostream>
#include "persona.h"
#include <cstring>

using namespace std;

persona::persona(){

}

persona::persona(char nombre [100], char apellido [100],int edad,char genero[100],char direccion[100],int peso,float altura){
    strcpy(this->nombre,nombre);
    strcpy(this->apellido,apellido);
    this -> edad=edad;
    strcpy(this->genero,genero);
    strcpy(this->direccion,direccion);
    this -> peso=peso;
    this -> altura=altura;

}

int persona::calcularimc(){
    int imc=0;
    imc = this->peso / ( this->altura*this->altura);
    return imc;
}

void persona::mayoredad(){

    if ( this -> edad >=18){
        cout << "Usuario mayor de edad"<< endl;
    }else{
        cout << "Usuario menor de edad" << endl;

    }

}

void persona::tostring(){
    cout << "--- INFORMACION PERSONAL ---"<< endl;
    cout << "Nombre: " << this->nombre << endl;
    cout << "Apellido: " << this->apellido << endl;
    cout << "Edad: " << this -> edad << endl;
    cout << "Genero: " << this->genero <<endl;
    cout << "Direccion: " << this->direccion << endl;
    cout << "Peso: " << this -> peso << endl;
    cout << "Altura: " << this -> altura << endl;
    cout << "IMC: " << this -> calcularimc() << endl;
    cout << endl << endl;


}

