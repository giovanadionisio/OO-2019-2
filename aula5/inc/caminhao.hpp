#ifndef CAMINHAO_H_
#define CAMINHAO_H_
#include "carro.hpp"


class Caminhao : public Carro{
    private:
        float carga;
        float comprimento;
        float altura;
        string tipoCarga;
        float gasolinaGasta;
        string cidadeInicial;
        string cidadeFinal;
        float kmPorLitro;
        float km;
    public:
        Caminhao();
        Caminhao(float _velocidadeMaxima, string marca);
        void setTipoCarga(string tipocarga);
        string getTipoCarga();
        float getCarga() const;
        void setCarga(float carga);
        float getComprimento();
        void setComprimento(float comprimento);
        float getAltura();
        void setAltura(float altura);
        void descarregar ();
        void carregar (float carga);
        void setRota(string cidadeInicial, string cidadeFinal);
        void setRota(float km, float velocidade);
        string getRotaInicial();
        string getRotaFinal();
        virtual void imprimeDados();
};

#endif