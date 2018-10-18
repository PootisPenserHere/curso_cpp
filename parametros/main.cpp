#include <iostream>

using namespace std;

void doble(int &a){
    a *= 2;
}

void doble(int * p){
    *p *= 2;
}

int main()
{
    int x = 4;
    // int %a = x; // Tipo de dato referencia
    // &x; // Referencia o direccion (operador)
    doble(x);
    cout << x << endl;

    doble(&x);
    cout << x << endl;

    return 0;
}