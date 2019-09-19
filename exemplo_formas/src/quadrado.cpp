#include "quadrado.hpp"

Quadrado::Quadrado(){
    setBase(1.0);
    setAltura(1.0);
    setTipo("Quadrado");
}

Quadrado::Quadrado(float base, float altura){
    if (base == altura){
        setBase(base);
        setAltura(altura);
    }
}

float Quadrado::CalculaArea(){
    float area;
    
    area = (getBase() * getAltura());
    return area;
}

float Quadrado::CalculaPerimetro(){
    float perimetro;

    perimetro = (4 * getBase());
    return perimetro;
}
