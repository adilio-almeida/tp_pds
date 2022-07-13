#include "../../include/quarto.hpp"

Quarto::Quarto(int _numero, int _checkout, bool _ocupacao, std::string _cliente, bool _servico) {
    
    numero = _numero;
    checkout = _checkout;
    ocupacao = _ocupacao;
    servico = _servico;
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

bool Quarto::get_servico() {
    return servico;
}

void Quarto::set_servico(bool aux) {
    servico = aux;
}

std::string Quarto::get_cliente() {
    return cliente;
}
