#ifndef PARALELOGRAMO_H_
#define PARALELOGRAMO_H_
#include "formageometrica.hpp"

class Paralelogramo : public FormaGeometrica{
    public:
        Paralelogramo();
        Paralelogramo(float base, float altura);
        float CalculaArea();
        float CalculaPerimetro();

};

#endif