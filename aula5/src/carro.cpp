#include "carro.hpp"

Carro::Carro(){
    marca = "null";
    ano = 0000;
    modelo = "null";
    capacidade = 1;
    cor = "null";
    preco = 0.0;
    velocidadeMax= 0.0;
    velocidadeAtual = 0.0;
    cout << "Criou o carro" << endl;
}

Carro::~Carro(){
    cout << "Destruiu o carro" << endl;
}

//Velocidade Atual
float Carro::getVelocidadeAtual(){
    return this->velocidadeAtual;
}

void Carro::setVelocidadeAtual(float velocidade){
    if(velocidade >= 0.0){
        velocidadeAtual = velocidade;
    }
}

// VelocidadeMax
float Carro::getVelocidadeMax(){
    return this->velocidadeMax;
}

void Carro::setVelocidadeMax(float velocidade){
    if(0.0 <= velocidade && velocidade < 400.00){
        this->velocidadeMax = velocidade; 
    }
}

//Capacidade
int Carro::getCapacidade(){
    return this->capacidade;
}

void Carro::setCapacidade(int qtePessoas){
    if (qtePessoas > 0){
        capacidade = qtePessoas;
    }
}

//Ano
int Carro::getAno(){
    return this->ano;
}

void Carro::setAno(int ano){
    this->ano = ano;
}

//Modelo
string Carro::getModelo(){
    return this->modelo;
}

void Carro::setModelo(string modelo){
    this->modelo = modelo;
}

//Marca
string Carro::getMarca(){
    return this-> marca;
}

void Carro::setMarca(string marca){
    this->marca = marca;
}

//Cor 
string Carro::getCor(){
    return this-> cor;
}

void Carro::setCor(string cor){
    this->cor = cor;
}

//Preco
float Carro::getPreco(){
    return this-> preco;
}

void Carro::setPreco(float preco){
    this->preco = preco;
}