#include <iostream>
#include <exception>
#include <vector>

using namespace std;

int dividir(int a, int b){
    try{
        if(b == 0){
            throw "No es posible dividir sobre cero";
        }

        return a/b;
    }catch(const char* e){
        cout << "desde dividir se cacho " << endl;
        throw e;
    }
}

/**
* throw() define el tipo de error, si se pasa un tipo de dato como int
* quiere decir que podemos recibir exepciones de ese tipo, si se deja vacia
* no se permite ningun expecion, estas expeciones son generadas por what()
*/
class MiException: public exception{
    virtual const char* what() const throw(){
        return "Ocurrio mi excepcion";
    }
}myexcept; // Ya esta creado el objecto, solo se usa directamente

int main()
{
    try{
        // codigo ...
        cout << "antes de lanzar" << endl;

        throw myexcept;

        cout << dividir(1, 0);

        vector<int> vec;
        vec.at(1);

        throw 'a';

        cout << "despues de lanzar" << endl;
    }catch(int e) {
        cout << "excepcion tipo entero " << e << endl;
    }
    catch(double e) {
        cout << "excepcion tipo doble " << e << endl;
    }
    catch(const char* e) {
        cout << "ERROR: " << e << endl;
    }
    catch(exception &e){
        cout << "excepcion " << e.what() << endl;
    }
    // Cachar cualquir excepcion
    catch(...){
        cout << "excepcion desconocida" << endl;
        return -1; // Termina la ejecucion
    }

    cout << "continuando..." << endl;

    return 0;
}