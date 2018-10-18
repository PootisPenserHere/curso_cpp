#include <iostream>
#include "CRectangulo.h"

using namespace std;

int main()
{
    CRectangulo rec(4, 5);
    CRectangulo rec2;
    CRectangulo rec3("tres");
    CRectangulo rec4(3, 6, "cuatro");

    rec.print();
    rec2.print();
    rec3.print();
    rec4.print();

    return 0;
}