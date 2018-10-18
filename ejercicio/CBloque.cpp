#include "CBloque.h"

CBloque::CBloque(){
    this->color = "negro";
    this->dimension = 0;
}

CBloque::CBloque(string color){
    this->color = color;
    this->dimension = 0;
}

CBloque::CBloque(int dimension){
    this->color = "negro";
    this->dimension = dimension;
}

CBloque::CBloque(string color, int dimension){
    this->color = color;
    this->dimension = dimension;
}

CBloque::~CBloque(){
    cout << "Se ha destruido el color: " << this->color << endl;
}

void CBloque::print(){
    cout << "bloque: " << this->color << ", " << this->dimension << endl;
}
