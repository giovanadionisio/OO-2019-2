#include "paralelogramo.hpp"

Paralelogramo::Paralelogramo(){
    setBase(1.0);
    setAltura(1.0);
}

Paralelogramo::Paralelogramo(float base, float altura){
    setBase(1.0);
    setAltura(1.0);
}

float Paralelogramo::CalculaArea(){
    float area;
    area = getBase() * getAltura();
    return area;
}

float Paralelogramo::CalculaPerimetro(){
    float perimetro;
    perimetro = (2*getBase())+(2*getAltura());
}