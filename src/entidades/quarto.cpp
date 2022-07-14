#include "../../include/quarto.hpp"

/** @brief Classe quarto

    Modelo de quarto, englobando métodos comuns aos diferentes tipos de quarto.
    @author Adilio
    @date Julho 2022 
*/

Quarto::Quarto(int _numero, int _checkout, bool _ocupacao, std::string _cliente, bool _servico) {
    
    numero = _numero;
    checkout = _checkout;
    ocupacao = _ocupacao;
    servico = _servico;
    cliente = _cliente;

}

/** @brief Setters e Getters do quarto.

    Retornam informações dos quartos, como número, ocupação, cliente e etc.
    @author Adilio
    @date Julho 2022 
*/

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
