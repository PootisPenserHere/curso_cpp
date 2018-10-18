#include <iostream>

using namespace std;

/**
* Los arrays no son protegidos y se encuentran cargados en memoria por lo que cuando son accedidos
* daran libre acceso a los datos cargados en el bloque de memoria donde se encuentran lo que puede
* conllevar a errores como sobre escribir el contador o corromper otros datos
*/
int main() {
    // TODO verificar si los array pre cargados tambien tienen size limit
    
    /**
    * Inicializa el array con n numero de campos, se podra indroducir menos pero no mas
    * cada uno de estos campos queda inicializado en 0
    */
    int arregloLimitado[5];

    int arregloPreCargado[] = {1, 2, 3, 4, 5};
    int total = 0;

    for(int i = 0; i < 5; i++){
        total += arregloPreCargado[i];
    }

    // El total se mide dividiendo la el tamaño del array entre el tamaño del tipo de dato 
    // que contiene
    cout << "Size: " << sizeof(arregloPreCargado)/sizeof(int) << endl;
    
    cout << "Total: " << total << endl;

    int renglones = 5;
    int columnas = 5;

    /**
    * Cuando se declara un array multidimensional con valores predefinidos es posible instanciarlo 
    * pasando unicamente el tamaño del segundo array y la lista da arrays que conformaran la primera
    * posicion
    *
    * int multi[][3] = {
    *     {1, 2, 3}.
    *     {4, 5, 6}
    * };
    */
    int arrayMulti[renglones][columnas];

    for(int i = 0; i < renglones; i++){
        for(int j = 0; j < columnas; j++){
            arrayMulti[i][j] = i*j;

            cout << arrayMulti[i][j] << '\t';
        }

        cout << endl;
    }

    return 0;
}