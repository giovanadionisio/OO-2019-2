#include "formageometrica.hpp"

FormaGeometrica::FormaGeometrica(){
    this->altura = 0.0;
    this->base = 0.0;
}

FormaGeometrica::FormaGeometrica(float base, float altura){
    if (base>0){
        this-> base = base;
    }
    if (altura>0){
        this-> altura = altura;
    }
}

float FormaGeometrica::getBase(){
    return this->base;
}

void FormaGeometrica::setBase(float base){
    if (base>0){
        this->base = base;
    }
}

float FormaGeometrica::getAltura(){
    return this->base;
}

void FormaGeometrica::setAltura(float altura){
    if (altura>0){
        this->altura = altura;
    }
}

string FormaGeometrica::getTipo(){
    return this->tipo;
}

void FormaGeometrica::setTipo(string tipo){
    this->tipo = tipo;
}

float FormaGeometrica::CalculaArea(){
    float area;
    
    area = base * altura;
    return area;
}

float FormaGeometrica::CalculaPerimetro(){
    float perimetro;

    perimetro = (2*base + 2*altura);
}