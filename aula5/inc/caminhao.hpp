#ifndef CAMINHAO_H_
#define CAMINHAO_H_
#include "carro.hpp"


class Caminhao : public Carro{
    private:
        float carga;
        float comprimento;
        float altura;
        string tipoCarga;
    public:
        Caminhao();
        Caminhao(float _velocidadeMaxima, string marca);
        void setTipoCarga(string tipocarga);
        string getTipoCarga();
        float getCarga();
        void setCarga(float carga);
        float getComprimento();
        void setComprimento(float comprimento);
        float getAltura();
        void setAltura(float altura);
};

#endif