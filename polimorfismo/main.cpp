#include <iostream>

using namespace std;

class CPoligono{
    protected:
        int base;
        int altura;
public:
    CPoligono():base(0), altura(0){};
    CPoligono(int b, int a):base(b), altura(a){};

    /**
    * Virtual indica que solo debe existir una instancia del metodo dentro del cotexto
    * cuando la clase CPoligono sea implementada si la nueva clase tiene un metod area()
    * este reemplazada el de CPologino
    *
    * Si el cuerpo de una funcion virtual es removido y esta es igualada a 0 se convertira
    * en una funcion virtual pura y al tener por lo menos una funcion virtual pura la clase
    * se volvera abstracta con lo que ya no podra ser instanciada solo implementada 
    * sirviendo asi como base para las demas clases
    */
    virtual int area() = 0;
    void printArea(){cout << "area: " << area() << endl;};
};

class CTriangulo: public CPoligono{
    public:
        CTriangulo(int b, int a){
            base = b;
            altura = a;
        }
        int area(){return base*altura/2;};
};

class CRectangulo: public CPoligono{
    public:
        CRectangulo(int a, int b):CPoligono(b, a){};
        int area(){return base*altura;};
};

void printPoligono(CPoligono &p){
    cout << "desde funcion area: " << p.area() << endl;
}

int main()
{
    // CPoligono pol;
    CTriangulo tri(4, 5);
    CRectangulo rec(3, 2);

    // pol.printArea();
    tri.printArea();
    rec.printArea();

    /**
    * El puntero es de tipo poligono pero triangulo y rectangulo al heredar pologino tambien lo son
    *
    * Como esta definido a ser de tipo poligono solo tomara el contexto de la clase pologino por lo que
    * al usar metodos de la clase CPoligono que han sido re implementados en las clases que lo heredan
    * el puntero seguira usando el metodo de la clase CPoligono
    */
    CPoligono * ppol;
    // ppol = &pol;
    // ppol->printArea();
    ppol = &rec;
    ppol->printArea();
    ppol = &tri;
    ppol->printArea();

    printPoligono(rec);
    printPoligono(tri);

    return 0;
}