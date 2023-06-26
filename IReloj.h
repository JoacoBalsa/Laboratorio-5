#ifndef IRELOJ_H
#define IRELOJ_H
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "DtReloj.h"

using namespace std;

class IReloj{
    public:
        virtual DtReloj getFecha() = 0;
        virtual void setFecha(DtReloj r) = 0;
};

#endif