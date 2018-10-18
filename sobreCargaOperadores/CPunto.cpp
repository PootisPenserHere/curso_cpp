#include "CPunto.h"

CPunto::CPunto(int x, int y):x(x){
    this->y = y;
}

void CPunto::print(){
    cout << "punto: " << x << "," << y << endl;
}

/**
* Se inicializa un nuevo objeto de tipo CPunto con el constructor vacio
* no se requiere que se le agreguen parametros en constructor ya que
* estos seran modificacos pero no es contraproducente pasarlos
*
* Este operador creara un nuevo objecto donde se sumara asi mismo y al
* objecto pasado y retornara la nueva instancia
*/
CPunto CPunto::operator+(CPunto p){
    CPunto temp;
    temp.x = p.x + x;
    temp.y = p.y + y;
    return temp;
}

CPunto CPunto::operator-(CPunto p){
    CPunto temp;
    temp.x = x - p.x;
    temp.y = y - p.y;
    return temp;
}