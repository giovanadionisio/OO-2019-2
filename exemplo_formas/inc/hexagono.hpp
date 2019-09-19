#ifndef HEXAGONO_H_
#define HEXAGONO_H_
#include "formageometrica.hpp"

class Hexagono : public FormaGeometrica{
    public:
        Hexagono();
        Hexagono(float lado);
        float CalculaArea();
        float CalculaPerimetro();
};

#endif