#ifndef CLIBRO_H
#define CLIBRO_H

#include <iostream>
using namespace std;

class CLibro{
    private:
        string titulo;
        string genero;
        int numeroPaginas;
    
    public:
        void setNumeroPaginas(int a);
        int getNumberoPaginas();
        void setTitulo(string str);
        string getTitulo();
        void setGenero(string str);
        string getGenero();
        void print();
};

#endif
