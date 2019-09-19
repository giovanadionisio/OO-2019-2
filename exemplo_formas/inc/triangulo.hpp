#ifndef TRIANGULO_H_
#define TRIANGULO_H_
#include "formageometrica.hpp"
#include <math.h>

class Triangulo : public FormaGeometrica{
    public:
        Triangulo();
        Triangulo(float base, float altura);
        float CalculaArea();
        float CalculaPerimetro();
};




#endif