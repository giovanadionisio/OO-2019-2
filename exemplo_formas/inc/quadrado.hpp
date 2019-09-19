#ifndef QUADRADO_H_
#define QUADRADO_H_
#include "formageometrica.hpp"

class Quadrado : public FormaGeometrica{
    public:
        Quadrado();
        Quadrado(float base, float altura);
        float CalculaArea();
        float CalculaPerimetro();
};

#endif