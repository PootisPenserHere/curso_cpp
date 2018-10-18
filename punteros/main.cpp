#include <iostream>

using namespace std;

int main()
{
    int primero = 1;
    int segundo = 2;

    // Declaracion de puntero
    // Puede tambien ser int * pint;
    int *pint = NULL;

    // Puntero int doble que almacena la direccion de punteros int
    int ** pintd = NULL;

    pintd = &pint;

    cout << pintd << endl;

    // Toma la direccion en memoria de la variable primero
    pint = &primero;

    cout << "direccion de pint: " << &pint << endl;
    cout << "direccion de primero: " << &primero << endl;
    cout << "direccion de segundo: " << &segundo << endl;
    cout << endl;

    cout << "valor de pint: " << pint << endl;
    cout << "valor de primero: " << primero << endl;
    cout << "valor de segundo: " << segundo << endl;
    cout << endl;

    *pint = 6;
    cout << "Cambinaod valor de primero" << endl;
    cout << "valor de pint: " << pint << endl;
    cout << "valor de primero: " << primero << endl;
    cout << "valor de segundo: " << segundo << endl;
    cout << endl;

    pint = &segundo;
    *pint = 20;
    cout << "Cambinaod valor de segundo" << endl;
    cout << "valor de pint: " << pint << endl;
    cout << "valor de primero: " << primero << endl;
    cout << "valor de segundo: " << segundo << endl;
    cout << endl;

    return 0;
}