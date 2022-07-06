#include "quartos.hpp"

Quarto::Quarto() {
    numero= 0;
    checkout = 0;
    ocupacao = 0;
    cliente = "NULL";
}

Quarto::Quarto(int _numero, int _checkout, bool _ocupacao, std::string _cliente) {
    
    numero = _numero;
    checkout = _checkout;
    ocupacao = _ocupacao;
    cliente = _cliente;

}

int Quarto::get_numero() {
    return numero;
}

int Quarto::get_checkout() {
    return checkout;
}

bool Quarto::get_ocupacao() {
    return ocupacao;
}

std::string Quarto::get_cliente() {
    return cliente;
}


void Quarto::imprime_dados() {

    std::cout << this->get_numero() << " " << this->get_ocupacao() << " " <<  this->get_checkout() 
    << " " << this->get_cliente() << std::endl;

}