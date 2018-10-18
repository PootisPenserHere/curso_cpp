#include <iostream>
#include "CRectangulo.h"

using namespace std;

/**
* Podra acceder a los metodos y atributos de la clase CRectangulo
* al ser friends
*/
void reducir(CRectangulo &rec){
    rec.base /= 2;
    rec.altura /= 2;
}

class CCuadrado{
    public:
        void convertir(CRectangulo &rec){
            rec.base = rec.altura;
        }

        static void print(CRectangulo const &rec){
            cout << "Desde cuadrado: " << rec.nombre << " - ";
            cout << rec.base << "x" << rec.altura << endl;
        }
};

int main()
{
    // No se requiere instancia de la clase para referenciarla
    cout << "Existen " << CRectangulo::getContador() << " instancias " <<  endl;

    CRectangulo rec(4, 5);
    CRectangulo rec2;
    CRectangulo rec3("tres");
    CRectangulo rec4(3, 6, "cuatro");

    cout << "Existen " << rec.getContador() << " instancias " << endl;

    rec.print();
    rec2.print();
    rec3.print();
    rec4.print();

    cout << "Reduciendo" << endl;
    reducir(rec4);
    rec4.print();

    cout << "Cuadrado" << endl;
    CCuadrado cuadro;
    cuadro.convertir(rec4);
    CCuadrado::print(rec4); // Usando el metodo static

    return 0;
}