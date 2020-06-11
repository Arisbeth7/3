#include <iostream>
#include <sstream>
#include "persona.h"


using namespace std;
char nombre [100],apellido [100];
int edad,peso,imc,cont;;
char genero[100],direccion[100];
float altura;

persona registrar(){
    cout << "Ingrese su nombre: "<< endl;
    cin >> nombre;
    cout << "Ingrese su apellido: "<< endl;
    cin >> apellido;
    cout << "Ingrese su edad: "<< endl;
    cin >> edad;
    cout << "Ingrese su genero: "<< endl;
    cin >> genero;
    cout << "Ingrese su direccion: "<< endl;
    cin >> direccion;
    cout << "Ingrese su peso: "<< endl;
    cin >> peso;
    cout << "Ingrese su altura: "<< endl;
    cin >> altura;
    cout << "su numero de usuario es: " << cont << endl;

    return persona(nombre,apellido,edad,genero,direccion,peso,altura);
}

void menu(){
    cout << "---------- MENU ----------"<< endl;
    cout << "-- 1. Registrar usuario --" << endl;
    cout << "---2. Calcular IMC -------" << endl;
    cout << "---3. Consultar datos ----" << endl;
    cout << "--------------------------" << endl;
    cout << endl;
}
void IMC (int imc){
    if (imc<=18){
        cout << "Bajo peso"<< endl;
    }else if(imc > 18 && imc <= 24){
        cout << "Normal" << endl;
    }else if(imc >= 25 && imc <= 29){
        cout << "sobrepeso"<< endl;
    }else if(imc >=30){
        cout << "obesidad"<< endl;
    }
}

int main(){
    persona personas [10];
    bool clase = true;
    int opcion;
    int numusuario;

    while(clase){
        menu();
        cout << "Ingrese la opcion deseada"<< endl;
        cin >> opcion;

        switch (opcion){
        case 1:
            personas[cont] = registrar();
            cont++;
            break;
        case 2:
            cout << "Ingrese el numero de usuario"<< endl;
            cin >> numusuario;

            imc = personas[numusuario].calcularimc();
            IMC(imc);
            break;
        case 3:
            cout << "Ingrese el numero de usuario"<< endl;
            cin >> numusuario;

            personas[numusuario].tostring();
            break;
        default:
            clase = false;
            break;

        }
    }

    return 0;
}
