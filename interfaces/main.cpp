#include <iostream>

using namespace std;

// Interfaz
class IAlgo{
    public:
    virtual void metodoUno() = 0;
    virtual int metodoDos(int a) = 0;
};

/**
* Esta clase debera implementar los metodos de la interfaz para que 
puedan ser
* usados 
*/
class CImplementa: public IAlgo{
    public:
        void metodoUno(){
            cout << "En el metodo uno" << endl;
        }

        int metodoDos(int a){
            return a;
        }
};

int main()
{
    CImplementa algo;
    algo.metodoUno();
    cout << "del metodo dos " << algo.metodoDos(22) << endl;

    return 0;
}
