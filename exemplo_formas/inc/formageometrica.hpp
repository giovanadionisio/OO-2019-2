#ifndef FORMAGEOMETRICA_H_
#define FORMAGEOMETRICA_H_
#include <iostream>
#include <string>
using namespace :: std;

class FormaGeometrica{
    private:
        float base;
        float altura;
        string tipo;
    public:
        FormaGeometrica();
        FormaGeometrica(float base, float altura);
        float getBase();
        void setBase(float base);
        float getAltura();
        void setAltura(float altura);
        string getTipo();
        void setTipo(string tipo);
        float CalculaArea();
        float CalculaPerimetro();
};

#endif