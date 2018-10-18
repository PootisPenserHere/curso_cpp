#include <iostream>

using namespace std;

class CMadre{
    public:
        int dinero;
        string apellido;
    public:
        CMadre():apellido("dos"){
            cout << "Madre sin parametros " << dinero << endl;
        }

        CMadre(int a):apellido("dos"){
            cout << "Madre con parametros " << dinero << endl;
        }
};

class CPadre{
    public:
        string apellido;
        CPadre():apellido("uno"){};
};

// Classes con herencia de CMadre
class CHija: virtual protected CMadre, public CPadre{
    public:
        // CHija(){cout << "Hija sin parametros" << endl;}

        CHija(int a):CMadre(a){ // Instancia la clase CMadre con parametros de ser llamado este constructor
            cout << "Hija con parametros " << dinero << endl;
        }
};

class CHijo: public CMadre{
    public:
        CHijo(){
            cout << "Hijo sin parametros" << endl;
        }
};

/**
* Al tener la herencia de dos classes que tienen el mimos contecto se marcan 
* como virtuales y se tomara la clase con el nivel mas accesible
* en este caso CMadre que es public
*/
class CNieto: public CHija, virtual public CMadre{
    public: 
        CNieto():CHija(0){
            cout << "Nieto " << dinero << endl;
        }
};

int main()
{
    CMadre madre;
    CHija hija(0);
    CHijo hijo;
    CNieto nieto;

    cout << madre.dinero << endl;
    // cout << hija.dinero << endl;
    cout << hija.CPadre::apellido << endl;
    // cout << nieto.dinero << endl;

    return 0;
}