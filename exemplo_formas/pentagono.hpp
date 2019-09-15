#ifndef PENTAGONO_H_
#define PENTAGONO_H_
#include "formageometrica.hpp"

class Pentagono : public FormaGeometrica{
    public:
        Pentagono();
        Pentagono(float lado, float apotema);
        float CalculaArea();
        float CalculaPerimetro();
};

#endif