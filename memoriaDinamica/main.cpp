#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Ingrese el numero de elementos: ";
    cin >> x;

    int * const arreglo = new int[x];
    if(arreglo == NULL){
        cout << "No se pudo resevar memoria" << endl;
    }

    else {
        for(int i = 0; i < x; i++){
            arreglo[1] = i;
            //cout << arreglo[i] << endl;
        }

        /**
        * Para el caso de prueba se han agregado los cin.get() de modo que se requiera que el
        * usuario de enter en consola para pasar a la siguiente accion y de esta manera pueda
        * ser "pausada" 
        *
        * Al ejecutar este programa se podra ver en task manager el incremento de memoria del
        * programa y como tras borrar el array esta regresa al sistema
        *
        * Como nota adicional, la memoria no sera regresada si es poca
        */
        cin.get();
        cin.get();
        delete[] arreglo;
        cin.get();
    }

    return 0;
}