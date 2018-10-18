#include <iostream>
#include <vector>

using namespace std;

/*
* Es un template que permite el manejo de arrays con una opcion para su control seguro
* ademas no limita en su tamaño de definicon y puede ser resized o extendido
*/
int main()
{
    // No requiere una longitud predefinida, depende del estandar puede o no aceptar ese argumento en su creacion
    vector<int> miArray;
    cout << "El tamanio del vector es: " << miArray.size() << endl;
    miArray.resize(5);
    cout << "El tamanio del vector es: " << miArray.size() << endl;
    miArray.push_back(11);
    cout << "El tamanio del vector es: " << miArray.size() << endl;

    // Permite acceder a cualquiera de las llaves aun cuando estan fueran del conexto del array
    cout << miArray[4] << endl;

    // Accesso seguro, solo permite acceder a llaves que existan, de lo contrario lanza un excepcion
    cout << miArray.at(5) << endl;

    vector< vector<int> > matriz; // Debe estar separado o se tomo como una extraccion

    /**
    * Esta caracteristica se encuentra en el estandar 2011 en caso de que el compilador este usando
    * otra version se puede utilizar una version custom
    * g++ -std=c++11 vector.cpp
    */
    vector <int> vec = {1, 2, 1};

    /**
    * Aunque es posible acceder al recurso de forma no segura con matriz[i][j] 
    * se puede hacer uso de la forma segura para auto resize el vector conforme se
    * agregan nuevos campos

    */
    for(int i = 0; i < 5; i++){
        vector<int> temp; // Se espera un vector con int en matriz
        
        for(int j = 0; j < 5; j++){
            temp.push_back(i*j);
        }

        matriz.push_back(temp);
    }

    for(int i = 0; i < matriz.size(); i++){
        for(int j = 0; j < matriz.at(i).size(); j++){
            cout << matriz.at(i).at(j) << '\t';
        }

        cout << endl;
    }

    return 0;
}