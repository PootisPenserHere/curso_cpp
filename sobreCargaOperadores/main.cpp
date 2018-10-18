#include <iostream>
#include "CPunto.h"

using namespace std;

CPunto operator*(CPunto p, int a){
    CPunto temp;
    temp.x = p.x * a;
    temp.y = p.y * a;
    return temp;
}

// Sobre carga
CPunto operator*(int a, CPunto p){
    CPunto temp;
    temp.x = p.x * a;
    temp.y = p.y * a;
    return temp;
}

ostream& operator<<(ostream &out, CPunto p){
    out << "Punto: [" << p.x << "," << p.y << "]";
}

int main()
{
    CPunto p1(2, 3);
    CPunto p2(4, 5);

    p1.print();
    p2.print();

    /**
    * Se imprime con el metodo print del nuevo objecto creado como resultado del operator
    * esto seria equivalente a  p1.operator+(p2); 
    */
    (p1 + p2).print();
    (p1 - p2).print();

    /**
    * Cuando se crean operadores como metodo solo es posible enviar el objecto al lado izquierdo
    * pero como funcion es posible cambiarlos de orden
    * equivale a operator*(p1, 3)
    * 
    * Primero se buscara el metodo y de no existir se buscara una funcion
    */
    (p1 * 3).print();
    (3 * p1).print();

    /**
    * Ya que cout se encuentra al lado izquierdo no es posible utilizar un metodo para 
    * realizar la sobre carga por lo que se debe hacer con una funcion
    */
    cout << p1;
    cout << ", Imprimiendo mas puntos .. " << p2*4 << endl;

    return 0;
}