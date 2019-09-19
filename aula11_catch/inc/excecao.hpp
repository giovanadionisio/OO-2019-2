#ifndef EXCECAO_HPP
#define EXCECAO_HPP

#include <iostream>
#include <exception>

using namespace std;

class Excecao : public exception {
    private:
        Excecao();
        const char* mensagem;
    public:
        const char* what();
        Excecao(const char *mensagem):mensagem(mensagem){};

};

#endif 
