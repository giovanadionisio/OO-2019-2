#include "hexagono.hpp"

Hexagono::Hexagono(){
    setBase(1.0);
}

Hexagono::Hexagono(float lado){
    setBase(lado);
}

float Hexagono::CalculaArea(){
    float area;

    area = (getBase()*getBase()*1.73*6.0)/4.0;
    return area;
}

float Hexagono::CalculaPerimetro(){
    float perimetro;

    perimetro = 6 * getBase();
    return perimetro;
}