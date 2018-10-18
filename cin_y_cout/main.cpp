#include <iostream>

// Al usuar el namespace se carga el contexto del objecto y ya no es
// necesario referenciarlo en cada uno
//
// ejemplo: std::cout puede dejarse como cout
using namespace std;

int main() {
    int x = 0; // Inicializacion por asignacion
    int y(0); // Inicializacion por constructor
    string nombre;
    string apellidos;

    cout << "inserte un valor: ";
    cin >> x;
    cout << "El doble de " << x << " es: " << x *2 << endl;

    cout << "¿Cual es su nombre? ";
    cin >> nombre; // Si se pasan varios valores separados por espacio solo tomaran el primero
    cout << "Su nombre es: " << nombre << endl;

    /**
    * Debido a que se esta combinando cin con getline existe una problema, cin lee argumentos los cuales estan
    * separados por espacios mientras que getline busca por salto de linea por lo que al introducir un valor
    * por cin y dar enter este genera dos entradas y solo la primara es tomada debido a ello al usat getline 
    * este termina abruptamente con el salto de linea encontrado y no retorna nada
    *
    * Otra solucion seria tomar el siguiente valor con cin.get() pero eso solo funciona si se conoce el valor
    * que ha quedado en buffer
    */
    cin.ignore(1000, '\n');

    cout << "Cuales son sus apellidos?";
    getline(cin, apellidos);
    cout << "Sus apellidos son: " << apellidos << endl;
    return 0;
}