#include "pentagono.hpp"

Pentagono::Pentagono(){
    setBase(1.0);
    setAltura(1.0);
}

Pentagono::Pentagono(float lado, float apotema){
    setBase(lado);
    setAltura(apotema);
}

float Pentagono::CalculaArea(){
    float area;

    area = (CalculaPerimetro() * getAltura())/2.0;
    return area;
}

float Pentagono::CalculaPerimetro(){
    float perimetro;

    perimetro = 5 * getBase();
    return perimetro;
}