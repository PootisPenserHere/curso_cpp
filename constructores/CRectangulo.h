#ifndef CRECTANGULO_H
#define CRECTANGULO_H

#include <iostream>
using namespace std;

class CRectangulo{
    private:
        static int contador;
        int base;
        int altura;
        string nombre;
    public:
        //static int contador; // Si se utiliza aqui se puede llamar sin usar metodos
        ~CRectangulo(); // Destructor

        //Constructores
        CRectangulo(int b, int a);
        CRectangulo();
        CRectangulo(string str);
        CRectangulo(int b, int a, string str);

        void print();
        static int getContador();
};

#endif