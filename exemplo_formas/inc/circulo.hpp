#ifndef CIRCULO_H_
#define CIRCULO_H_
#include "formageometrica.hpp"

class Circulo : public FormaGeometrica{
    public:
        Circulo();
        Circulo(float raio);
        float CalculaArea();
        float CalculaPerimetro();
};

#endif