#include <iostream>

#include "caminhao.hpp"

using namespace std;
void funcImprime(Caminhao *caminhao){
    caminhao->imprimeDados();
}
int main(){
    Carro meu_carro;
    Carro meu_carro2;
    Carro *carro2; 
    Caminhao *meu_caminhao = new Caminhao();
    
    cout << "=> meu_carro" << endl;
    meu_carro.setModelo("Argo");
    meu_carro.setAno(2018);
    meu_carro.setCapacidade(5);
    cout <<"Modelo: "<< meu_carro.getModelo() <<endl;
    cout <<"Ano: "<< meu_carro.getAno() << endl;

    cout <<"=> meu_carro2" << endl;
    meu_carro2.setModelo("HB20");
    meu_carro2.setAno(2019);
    meu_carro2.setCapacidade(5);
    cout <<"Modelo: "<< meu_carro2.getModelo() <<endl;
    cout <<"Ano: "<< meu_carro2.getAno() << endl;

    cout <<"=> carro2" << endl;
    carro2 = new Carro();
    carro2->setModelo("Up Tsi");
    carro2->setAno(2018);
    carro2->setCapacidade(4);
    cout <<"Modelo: "<< carro2->getModelo()<<endl;
    cout <<"Ano: "<< carro2->getAno()<<endl;
    cout << "Capacidade: " << carro2->getCapacidade()<< endl;
    
    cout << "=> Meu caminhao" << endl;
    meu_caminhao->setCapacidade(2);
    cout <<"Caminhao Mercedes: "<<endl;
    cout << "Capacidade do caminhao " << meu_caminhao->getCapacidade()<< endl;
    meu_caminhao->imprimeDados();
    funcImprime(meu_caminhao);
    
    delete carro2;

 return 0;
}