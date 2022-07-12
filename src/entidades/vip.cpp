#include <string>
#include "../../include/vip.hpp"


QuartoVIP::QuartoVIP(int _numero, int _checkout, bool _ocupacao, std::string _cliente): Quarto(_numero, _checkout, _ocupacao, _cliente),
 tipo("VIP"),
 preco(10.00) {}

std::string QuartoVIP::get_tipo() {
    return tipo;
}

double QuartoVIP::get_preco() {
    return preco;
}

void QuartoVIP::imprime_dados() {

    std::cout << "\nQuarto VIP!\n";
    std::cout << "Numero: "<< this->get_numero() << " " << "\nDias para CheckOut: "<<  this->get_checkout() 
    << "\nNome hospede: " << this->get_cliente() << std::endl;

}

