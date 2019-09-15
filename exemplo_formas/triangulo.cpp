#include "triangulo.hpp"

Triangulo::Triangulo(){
    setBase(1.0);
    setAltura(1.0);
}

Triangulo::Triangulo(float base, float altura){
        setBase(base);
        setAltura(altura);
}

float Triangulo::CalculaArea(){
    float area;
    
    area = (getBase() * getAltura())/2;
    return area;
}

float Triangulo::CalculaPerimetro(){
    float perimetro;

    perimetro = sqrt((getBase()*getBase())+(getAltura()*getAltura())) + getAltura() + getBase();
    return perimetro;
}
