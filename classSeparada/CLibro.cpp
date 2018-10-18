#include "CLibro.h"

void CLibro::setNumeroPaginas(int a){
    numeroPaginas = a;
}

int CLibro::getNumberoPaginas(){
    return numeroPaginas;
}

void CLibro::setTitulo(string str){
    titulo = str;
}

string CLibro::getTitulo(){
    return titulo;
}

void CLibro::setGenero(string str){
    genero = str;
}

string CLibro::getGenero(){
    return genero;
}

void CLibro::print(){
    cout << titulo;
    cout << " - ";
    cout << genero;
    cout << " #";
    cout << numeroPaginas;
    cout << endl;
}