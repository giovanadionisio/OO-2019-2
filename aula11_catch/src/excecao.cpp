#include "excecao.hpp"
Excecao::Excecao(){    
}

const char* Excecao::what(){
    return this->mensagem;
}