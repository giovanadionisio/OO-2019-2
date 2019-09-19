#include <iostream>
#include <exception>

#include "excecao.hpp"
#include "animal.hpp"

using namespace std;

int main(int argc, char **argv) {
try{
   Animal umAnimal("Cachorro", "Bob", "Late");
   umAnimal.imprime();   

   Animal terceiroAnimal(umAnimal);
   terceiroAnimal.imprime();

   Animal quartoAnimal("Gato", "Felix", "fala");
   quartoAnimal.imprime();

   terceiroAnimal = quartoAnimal;
   terceiroAnimal.imprime();

   Animal outroAnimal("Gato", "Bambam", "");
   outroAnimal.imprime();
} 
catch(int i){
  cout << "Erro x" << endl;
}
catch(Excecao& e){
  cout << "Erro objeto: " << e.what() << endl;
}

  return 0;
}
//Try : em todos os lugares onde existe tratamento de dados
//throw : no cpp (construtor) -> envia uma mensagem no contexto da classe
// Catch : depois do try
// dentro do std existe a 'exception' -> lida com as exceções genéricas

