#ifndef CLIBRERO_H
#define CLIBRERO_H

#include <iostream>
#include "CLibro.h"

using namespace std;

class CLibrero{
    private:
        string color;
        CLibro *libro;
    
    public:
        void setColor(string str);
        string getColor();
        void setLibro(CLibro *lib);
        CLibro* getLibro();
        void print();
};

#endif
