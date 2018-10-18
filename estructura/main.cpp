#include <iostream>

using namespace std;

/**
* Es posible poner objectos dentro de otro objecto
*/
struct Pelicula{
    string nombre;
    int year;
};

void print(Pelicula p){
    cout << p.nombre;
    cout << " (" << p.year << ")";
    cout << endl;
}

int main()
{
    Pelicula peli;
    peli.nombre = "abc";
    peli.year = 2018;
    print(peli);
    
    /**
    * Utilizacion de punteros
    *
    * La utilizacion de -> es solo para punteros por lo que si hubiera un objecto dentro de
    * un objecto para modificar o leer su atributo seria ppeli>director.nombre 
    */
    Pelicula * ppeli;
    ppeli = &peli;
    (*ppeli).nombre = "cba"; // Primero debe dereferenciar y luego acceder al atributo
    ppeli->year = 1990; // Es el equivalente a (*ppeli).year
    print(peli);

    // array de structs
    Pelicula movies[2];
    movies[0].nombre = "minions";
    movies[0].year = 2015;
    movies[1].nombre = "avengers";
    movies[1].year = 2012;
    print(movies[0]);
    print(movies[1]);

    return 0;
}