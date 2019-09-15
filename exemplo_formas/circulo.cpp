#include "circulo.hpp"

Circulo::Circulo(){
    setBase(1.0);
    setTipo("Circulo");
}

Circulo::Circulo(float raio){
    setBase(raio);
}

float Circulo::CalculaArea(){
    float area;
    
    area = (getBase()*getBase()*3.14);
    return area;
}

float Circulo::CalculaPerimetro(){
    float perimetro;

    perimetro = (2 * 3.14 * getBase());
    return perimetro;
}