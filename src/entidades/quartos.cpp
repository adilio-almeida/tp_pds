#include "../../include/quartos.hpp"

Quarto::Quarto(int numero, int checkout, bool ocupacao, std::string cliente): 
    _numero(numero),
    _checkout(checkout),
    _ocupacao(ocupacao), 
    _cliente(cliente) {
    }

int Quarto::get_numero() {
    return _numero;
}

int Quarto::get_checkout() {
    return _checkout;
}

bool Quarto::get_ocupacao() {
    return _ocupacao;
}

std::string Quarto::get_cliente() {
    return _cliente;
}


void Quarto::imprime_dados() {

    std::cout << this->get_numero() << " " << this->get_ocupacao() << " " <<  this->get_checkout() 
    << " " << this->get_cliente() << std::endl;

}


void Quarto::set_ocupacao(bool i) {
    _ocupacao = i;
}
void Quarto::set_cliente(string cli) {
    _cliente = cli;
}

void Quarto::set_checkout(int i){
    _checkout = i;
}