#include <iostream>

using namescape std;

int main()
{
    CBloque b1;
    CBloque b2("rojo");
    CBloque b3("rojo", 10);
    CBloque b4(20);

    b1.print(); // bloque: negro, 0
    b2.print(); // bloque: rojo, 0
    b3.print(); // bloque; rojo, 10
    b4.print(); // bloque: negro, 20

    pintar(b1, "verde");
    b1.print(); // bloque: verde, 0

    CResize::resize(b3, 30);
    b3.print(); // bloque: rojo, 30
    return 0;
}