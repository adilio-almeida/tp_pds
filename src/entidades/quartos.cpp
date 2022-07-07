#include "../../include/quartos.hpp"

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
