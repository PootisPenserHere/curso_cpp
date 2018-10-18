#include "CLibrero.h"

void CLibrero::setColor(string str){
    color = str;
}

string CLibrero::getColor(){
    return color;
}

void CLibrero::setLibro(CLibro *lib){
    libro = lib;
}

CLibro* CLibrero::getLibro(){
    return libro;
}

void CLibrero::print(){
    cout << "Libro de color " << color << " libro: ";
    libro->print();
}
