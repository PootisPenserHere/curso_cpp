#include <iostream>

using namespace std;

main()
{
    // if else
    int x = 5;
    if(x > 0){
        cout << "x es positivo" << endl;
    } 
    else if(x < 0){
        cout << "x es negativo" << endl;
    } 
    else {
        cout << "x es cero" << endl;
    }

    if(x){
        cout << "Si tiene truthy" << endl;
    }

    // ternaria
    int y = x < 5 ? x : 0;
    cout << y << endl;

    // for normal
    for(int i = 0; i < 5; i++){
        cout << i << ",";
    }

    cout << endl;

    // for con iterador externo
    int i = 0;
    for(; i < 5; i++){
        cout << i << ",";
    }

    cout << endl;

    // for each - requiere estandar 2011
    int arr[] = {1, 2, 3, 4};
    for(int a : arr){
        cout << a << ",";
    }

    cout << endl;

    // while
    int n = 5;
    while(n > 0){
        n--;
        if(n == 2) continue;

        cout << n << ",";
    }

    cout << endl;

    // do while
    do{
        cout << "do while" << endl;
    } while(false);

    // switch - siempre es sobre un valor numerico
    int z = 2;

    switch(z)
    {
        case 1:
            cout << "z es 1" << endl;
            break;
        case 2:
            cout << "z es 2" << endl;
            break;
        default:
            cout << "Valor desconocido" << endl;
            break;
    }

    switch(z)
    {
        case 1:
        case 2:
        case 3:
            cout << "z es 1 o 2 o 3" << endl;
            break;
        default:
            cout << "z es desconocido" << endl;
            break;
    }

    // enum
    enum colores{rojo=10, azul, blanco, verde};
    colores a = azul;

    switch(a)
    {
        case rojo:
            cout << "a es rojo" << endl;
            break;
        case azul:
            cout << "a es azul" << endl;
            break;
        default:
            cout << "Valor desconocido" << endl;
            break;
    }

    cout << a << endl;

    return 0;
}