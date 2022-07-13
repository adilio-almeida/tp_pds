#include <string>
#include "../../include/vip.hpp"


QuartoVIP::QuartoVIP(int _numero, int _checkout, bool _ocupacao, std::string _cliente, bool _servico): Quarto(_numero, _checkout, _ocupacao, _cliente, _servico),
 tipo("VIP"),
 preco(10.00) {}

std::string QuartoVIP::get_tipo() {
    return tipo;
}

double QuartoVIP::get_preco() {
    return preco;
}

void QuartoVIP::imprime_dados() {

    std::cout << "\n***** Quarto VIP ******\n";
    std::cout << "Numero: "<< this->get_numero() << " " << "\nDias para CheckOut: "<<  this->get_checkout() 
    << "\nNome hospede: " << this->get_cliente() << "\n***** ----------- *****\n";

}

