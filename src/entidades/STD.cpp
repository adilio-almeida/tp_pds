#include <string>
#include "../../include/std.hpp"


QuartoSTD::QuartoSTD(int _numero, int _checkout, bool _ocupacao, std::string _cliente, bool _servico): Quarto(_numero, _checkout, _ocupacao, _cliente, _servico),
 tipo("STD"),
 preco(4.00) {}

std::string QuartoSTD::get_tipo() {
    return tipo;
}

double QuartoSTD::get_preco() {
    return preco;
}

void QuartoSTD::imprime_dados() {

    std::cout << "\nQuarto Standard\n";
    std::cout << "Numero: "<< this->get_numero() << " " << "\nDias para CheckOut: "<<  this->get_checkout() 
    << "\nNome hospede: " << this->get_cliente() << std::endl;

}

