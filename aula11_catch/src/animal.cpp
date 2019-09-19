#include "animal.hpp"
#include <iostream>
#include "excecao.hpp"

const Excecao string_vazia("Erro de string vazia");

Animal::Animal(string tipo, string nome, string som) : tipo(tipo), nome(nome),som(som) {
   if(tipo. length() == 0 || nome.length() == 0){
      throw -1;
   }
   if (som.length() == 0){
      throw string_vazia;
   }
}

Animal::Animal(const Animal & a) {
   this-> nome = a.nome;
   this-> tipo = a.tipo;
   this-> som = a.som;
}

void Animal::imprime() {
   std::cout << "O " << tipo << " " << nome << " " << som << endl;
}

Animal & Animal::operator=(const Animal & a){
    if(this != &a){
       this->nome = a.nome;
       this->tipo = a.tipo;
       this->som = a.som;
    }
    return *this;
}
