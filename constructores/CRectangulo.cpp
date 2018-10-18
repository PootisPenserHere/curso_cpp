#include "CRectangulo.h"

/**
* Este elemento estatico se utilizara para llevar un contador de la veces que se
* ha instanciado la clase
*/
int CRectangulo::contador = 0;

/**
* Destructor
*
* Se ejecutara al terminar el contexto en que la clase fue invocada
*/
CRectangulo::~CRectangulo(){
    cout << "Destruyendo a " << nombre << endl;
    contador--;
}

// Constructor basico
CRectangulo::CRectangulo(int b, int a){
    base = b;
    altura = a;
    nombre = "sin nombre";
    contador++;
}

// Sobre carga de constructor
CRectangulo::CRectangulo(){
    base = 0;
    altura = 0;
    nombre = "sin nombre";
    contador++;
}

/**
* Inicializa los valores antes de crear el objecto
*/
CRectangulo::CRectangulo(string str):base(0), altura(0), nombre(str){
    contador++;
}

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
    contador++;

}

void CRectangulo::print(){
    cout << nombre << ": " << base << "x" << altura << endl;
}