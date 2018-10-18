#include "CRectangulo.h"

// Constructor basico
CRectangulo::CRectangulo(int b, int a){
    base = b;
    altura = a;
    nombre = "sin nombre";
}

// Sobre carga de constructor
CRectangulo::CRectangulo(){
    base = 0;
    altura = 0;
    nombre = "sin nombre";
}

/**
* Inicializa los valores antes de crear el objecto
*/
CRectangulo::CRectangulo(string str):base(0), altura(0), nombre(str){}

/**
* Inicializacion de atributos en contecto de clase
*
* En c++ this es un puntero por lo que se utiliza -> para acceder a metodos y atributos
* para poder acceder por punto se puede dereferenciar
* (*this).base = base
* 
* Al entrar a constructor aun no se han creado los atributos por lo que no existe
* ambiguedad entre parametros de constructor y atributos de clase de manera que es
* posible inicializarlo por lista de inicializacion
*/
CRectangulo::CRectangulo(int base, int altura, string nombre):nombre(nombre){
    this->base = base;
    this->altura = altura;

}

void CRectangulo::print(){
    cout << nombre << ": " << base << "x" << altura << endl;
}