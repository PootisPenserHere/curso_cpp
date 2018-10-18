#include <iostream>

using namespace std;

int main()
{
    /**
    * Toma un espacio en memoria y puede ser llamada dentro del codigo
    * mas no puede ser cambiada
    */
    const int x = 10;

    /**
    * Se recomienda sean en mayuscula, durante el proceso de compilacion el
    * pre compilador tomara esta constante y la reemplazara en todas los
    * casos donde es referenciada, no ocupa memoria
    */
    #define X 20

    cout << x << endl;
    cout << X << endl;

    return 0;
}