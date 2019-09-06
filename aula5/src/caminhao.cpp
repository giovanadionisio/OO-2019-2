#include "caminhao.hpp"


Caminhao::Caminhao(string marca)
{
    carga = 0.0;
    comprimento = 0.0;
    altura = 0.0;
    setVelocidadeMax(180.0);
    cout << "Construtor do caminhao" << endl;
    cout << "Caminhão " << marca;

}

//Carga
float Caminhao::getCarga(){
    return this-> carga;
}

void Caminhao::setCarga(float carga){
    this->carga = carga;
}

//Comprimento
float Caminhao::getComprimento(){
    return this->comprimento;
}

void Caminhao::setComprimento(float comprimento){
    this->comprimento = comprimento;
}

//Altura
float Caminhao::getAltura(){
    return this-> altura;
}

void Caminhao::setAltura(float altura){
    this->altura = altura;
}

//tipoCarga
string Caminhao::getTipoCarga(){
    return this-> tipoCarga;
}

void Caminhao::setTipoCarga(string tipoCarga){
    this->tipoCarga = tipoCarga;
}