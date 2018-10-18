#ifndef CPUNTO_H
#define CPUNTO_H

#include <iostream>

using namespace std;

class CPunto{
    private:
        int x;
        int y;
    public:
        CPunto(int x, int y);
        CPunto(){}; // Se inicializara vacio sin necesidad de declararlo en el cpp
        void print();

        /**
        * Solo recibe el lado derecho de la operacion
        */
        CPunto operator + (CPunto p); // Tambien puede ser operator+
        CPunto operator - (CPunto p);
        friend CPunto operator*(CPunto p, int a);
        friend CPunto operator*(int a, CPunto p);
        friend ostream& operator<<(ostream &out, CPunto p);
};

#endif