#include <iostream>
#include "CLibro.h"
#include "CLibrero.h"

using namespace std;

int main()
{
    CLibro libro;
    libro.setTitulo("La cosa");
    libro.setGenero("cosas");
    libro.setNumeroPaginas(600);
    libro.print();

    CLibrero librero;
    librero.setColor("negro");
    librero.setLibro(&libro);
    librero.print();

    librero.getLibro()->setNumeroPaginas(500);
    librero.print();

    return 0;
}