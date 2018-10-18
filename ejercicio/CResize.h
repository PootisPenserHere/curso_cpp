#ifndef CRESIZE_H
#define CRESIZE_H

#include <iostream>
#include "CBloque.h"

using namespace std;

class CResize{
    public:
        static void resize(CBloque &b, int dimension);
};

#endif