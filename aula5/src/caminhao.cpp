#include "caminhao.hpp"

Caminhao::Caminhao(){
    carga = 0.0;
    comprimento = 0.0;
    altura = 0.0;
    tipoCarga = "null";
    cout << "Construtor do caminhao" << endl;
}

//Carga
float Caminhao::getCarga() const{
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

//Rota
void Caminhao::setRota(const string cidadeInicial, string cidadeFinal)
{
    this->cidadeInicial = cidadeInicial;
    this->cidadeFinal = cidadeFinal;
    // metodoX distancia 
    gasolinaGasta = km/kmPorLitro;
}

void Caminhao::setRota(float km, float velocidade)
{
    gasolinaGasta = (velocidade/100.0)*km/kmPorLitro;
}

//Imprime dados
void Caminhao::imprimeDados()
{
    cout << "Imprime caminhao: " << endl;;
    cout << "Carga " << this->carga << endl;
    cout << "altura " << this->altura << endl;
    cout << "comprimento " << this->comprimento << endl;
}