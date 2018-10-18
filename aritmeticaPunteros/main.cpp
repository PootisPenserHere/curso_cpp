#include <iostream>

using namespace std;

int main()
{
    /**
    * Cada uno de lo punteros tiene un tipo de dato dato y no es posible guardar en
    * ellos la direccion de un tipo de dato diferente
    */
    char * pchar;
    short * pshort;
    int * pint;
    int numero = 10;

    pint = &numero;

    // Casteo de punteros para tomar el mismo valor que pint
    pchar = (char*)pint;
    pshort = (short*)pint;

    cout << "direccion de pchar: " << &pchar << endl;
    cout << "direccion de pshort: " << &pshort << endl;
    cout << "direccion de pint: " << &pint << endl;
    cout << "direccion de numero: " << &numero << endl;
    cout << endl;

    /**
    * El tipo char no puede ser impreso por lo que se castea a un tipo de dato que
    * pueda ser presentado, al ser puesto como int difiere del formato de los
    * demas punteros que estan en formato hexadecimal
    *
    * Para castear de decimal a hex en iostrea se pasa la palabra hex previo al
    * valor decimal esto no obstante no contendra el 0x por lo que se agrego 
    * manual mente
    *
    * Como nota, una vez que se ha pasado el valor hex este se aplicara a todos
    * los siguientes usos por lo que hay que modificarlo con un dec antes 
    * de inprimir otros valores int
    */
    cout << "valor de pchar: 0x" << hex << (int)pchar << endl;
    cout << "valor de pshort: " << pshort << endl;
    cout << "valor de pint: " << pint << endl;
    cout << "valor de numero: " << dec << numero << endl;
    cout << endl;

    /**
    * Al hacer un incremento o decremento los punteros se mueven en la direccion dada
    * por el tamaño del tipo de dato
    * char 1 byte
    * short 2 byte
    * int 4 byte
    */
    pchar++;
    pshort++;
    pint++;
    cout << "valor de pchar: 0x" << hex << (int)pchar << endl;
    cout << "valor de pshort: " << pshort << endl;
    cout << "valor de pint: " << pint << endl;
    cout << "valor de numero: " << dec << numero << endl;
    cout << endl;

    /**
    * Al cambiar el valor que se encuentra en la direccion de pchar estamos modificando el byte
    * que contiene su tipo de dato el cual referencia la posicion de numero (un int por ende compuesto 
    * por 4 bytes) al que char hace referencia ahora al haber hecho incremento en 1 
    * por lo que numero pasara de 
    * 0000 0000 0000 0000 0000 01010 = 10  a 
    * 0000 0000 0000 0011 0000 01010 = 778
    * donde el 0011 es el equivalente a un 3 en binario y es el valor de pchar
    */
    *pchar = 3;

    pchar += 3;
    pshort -= 3;
    pint += 2;
    cout << "valor de pchar: 0x" << hex << (int)pchar << endl;
    cout << "valor de pshort: " << pshort << endl;
    cout << "valor de pint: " << pint << endl;
    cout << "valor de numero: " << dec << numero << endl;
    cout << endl;

    return 0;
}