#include <iostream>

using namespace std;
/**
* C++ ejecuta de forma lineal el codigo, todo aquello que no sea declarado cuando es
* invocado no existe y generara error en compilacion
*
* Es posible no obstante declarar la funcion sin darle un body y mas adelante en el
* codigo incluso despues de su invocacion es posible agregar el body
*
* Alternativamente se puede declarar al funcion con todo y cuerpo antes de su invocacion
*/
void saludo();

int main(){
    saludo();

    return 0;
}

void saludo(){
    cout << "hola" << endl;
}
