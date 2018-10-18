#ifndef CRECTANGULO_H
#define CRECTANGULO_H

#include <iostream>
using namespace std;

class CRectangulo{
    private:
        int base;
        int altura;
        string nombre;
    public:
        ~CRectangulo(); // Destructor
        CRectangulo(int b, int a);
        CRectangulo();
        CRectangulo(string str);
        CRectangulo(int b, int a, string str);
        void print();
};

#endif