#include <iostream>

using namespace std;

/**
* Entre <> va la lista de tipos que va a declarar y se puede usar "class" o "typename" 
* ambos funcionan igual
*
* Se esta declarando un nuevo tipo de dato llamado T el cual es usado en un funcion que
* retorna un tipo de dato T y que toma dos parametros ambos del tipo T
*/
template <typename T> T getMax(T a, T b){
    return a > b ? a : b;
}

template <typename T, typename U> T getMaxDosTypes(T a, U b){
    return a > b ? a : b;
}

template <typename T> class CPar{
    private:
        T a;
        T b;
    public:
        CPar(T a, T b):a(a){this->b = b;};
        T getMax();
        void algo(int a){};
};

template <typename T> T CPar<T>::getMax(){
    return a > b ? a : b; 
}

template <typename T> void incremento(T &a){
    a++;
}

/**
* En el caso de la especializacion esta se usa para crear versiones genericas que son como un
* comportamiento base y asu vez contar con alternativas hechas para un comportamiento espesifico
* si se recibe un tipo de dato esperado
*/
// Especializacion de functiones
template <typename T> void saludo(){
    cout << "hola" << endl;
}

template <> void saludo<int>(){
    cout << "hola soy entero" << endl;
}

// Especializacion de clase
template <typename T> class CContenedor{
    private:
        T elemento;
    public:
    CContenedor(T e):elemento(e){};
    T incremento(){return ++elemento;};
};

template <> class CContenedor<char>{
    private:
        char elemento;
    public:
        CContenedor(char e):elemento(e){};
        char upper(){
            if((elemento >= 'a') && (elemento <= 'z')){
                elemento += 'A' - 'a'; // La distsncia en ascii
            }
            
            return elemento;
        }
};

int main()
{
    int x = 50;
    int y = 60;
    char a = 'e';
    char b = 'h';

    /**
    * Llamado de la function template
    *
    * Al llamar a la funcion template es ideal mandar el tipo de dato de como debe de asumir
    * su typename esto se hace con getMax<int>(x, y) aunque no es siempre necesario ya que
    * se puede hacer una inferencia, en este caso al usar el typename T para todas sus variables
    * y pasarle dos parametros de tipo int se deduce de ellos que T es int
    *
    * Cuando se envian tipos de datos diferentes pero se define el typename esto son casteados
    * al tipo deseado de ser posible
    */
    cout << getMax(x, y) << endl;
    cout << getMax<int>(a, x) << endl;

    /**
    * Cuando se tienen mas de un typename la funcionalidad es la misma, aun cuando no se
    * declare el typename si es posible inferir los tipos de datos esto se hara de forma
    * automatica
    */
    cout << getMaxDosTypes(x, a) << endl; // T es int
    cout << getMaxDosTypes(b, y) << endl; // T es char

    CPar<int> par(80, 15);
    cout << par.getMax() << endl;

    cout << "incremento" << endl;
    cout << x << endl;
    incremento(x);
    cout << x << endl;

    // Aplicacion de especializacion
    saludo<char>();
    saludo<int>();

    CContenedor<int> numero(8);
    cout << numero.incremento() << endl;
    cout << numero.incremento() << endl;

    CContenedor<char> letra('g');
    cout << letra.upper();

    return 0;
}