#include <iostream>

using namespace std;

/**
    * Ejemplo auto increment de void segun su tipo de dato
    */
    void incremento(void * data, int size){
        if(size == sizeof(char)){
            (*(char*)data)++;
        }
        else if(size == sizeof(int)){
            (*(int*)data)++;
        }
    }

int main()
{
    int numeros[6] = {0};
    int * pint;

    // Primer valor del array
    pint = numeros;
    *pint = 10;

    // Segundo valor del array
    pint++;
    *pint = 20;

    // Tercer valor
    pint = &numeros[2];
    *pint = 30;

    // Cuarto valor
    pint = numeros + 3; // Numeros siempre apunta a la primer posicion
    *pint = 40;

    // Quinto valor
    pint = numeros;
    *(pint + 4) = 50;

    // Sexto
    // Esto es un offset, si no se hubiera reiniciado su valor en linea 27 
    // se le sumaria al valor de linea 23 y tomaria la posicion 8 (noveno valor)
    pint[5] = 60;

    for(int i = 0; i < 6; i++){
        cout << numeros[i] << '\t';
    }

    cout << endl;

    /**
    * El tipo de dato void al no tener una estructura definida puede tomar cualquier tipo
    * de dato, para que este pueda recibir incrementos debe ser casteado
    */
    void * pvoid;
    int a = 11;
    char c = 'c';

    pvoid = &a;
    pvoid = &c;

    /**
    * Al ser un char que solo ocupa in byte toma el equivalente a 'd' pero al ser casteado
    * se convierte en un int que requiere 4 bytes por lo que se agregan 3 bytes mas y esto
    * resulta en el cambio de valor
    */
    *(char*)pvoid = 'd';
    cout << *(int*)pvoid << endl; //2916

    // Usando el auto increment por referencia
    cout << "antiguo valor de a: " << a << endl;
    cout << "antiguo valor de c: " << c << endl;

    incremento(&a, sizeof(a));
    incremento(&c, sizeof(c));

    cout << "nuevo valor de a: " << a << endl;
    cout << "nuevo valor de c: " << c << endl;

    return 0;
}