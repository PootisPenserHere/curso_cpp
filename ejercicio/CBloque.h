#ifndef CBLOQUE_H
#define CBLOQUE_H

#include <iostream>
using namespace std;

class CBloque{
    private:
        string color;
        int dimension;
    public:
        CBloque();
        CBloque(string color);
        CBloque(int dimension);
        CBloque(string color, int dimension);
        ~CBloque();
        void print();
        friend void pintar(CBloque &bloque, string color);
        friend class CResize;
};

#endif