#ifndef PERSONA_H
#define PERSONA_H


class persona{
    private:
        char nombre [100];
        char apellido [100];
        int edad;
        char genero[100];
        char direccion[100];
        int peso;
        float altura;
    public:
        persona();
        persona(char[],char[],int,char[],char[],int,float);
        int calcularimc();
        void mayoredad();
        void tostring();

};

#endif // PERSONA_H
