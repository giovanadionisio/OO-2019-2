#include <iostream>
#include <string>
using namespace std;

class Carro{
    private:
        string marca;
        int ano;
        string modelo;
        int capacidade;
        string cor;
        float preco;
        float velocidadeMax;
        float velocidadeAtual;
    public:
        Carro();
        Carro(float velocidadeMaxima);
        ~Carro();
        void aceleraCarro(float fatorAceleracao);
        void desaceleraCarro(float fatorAceleracao);
        void setCapacidade(int capacidade);
        int getCapacidade();
        void setVelocidadeAtual(float velocidadeAtual);
        float getVelocidadeAtual();
        void setVelocidadeMax(float velocidadeMax); 
        float getVelocidadeMax();
        int getAno();
        void setAno(int ano);
        string getModelo();
        void setModelo(string modelo);
        string getMarca();
        void setMarca(string marca);
        string getCor();
        void setCor(string cor);
        float getPreco();
        void setPreco(float preco);
};