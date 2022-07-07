#include <string>
#include "../../include/vip.hpp"

QuartoVIP::QuartoVIP(int numero, int checkout, bool ocupacao, std::string cliente, std::string tipo, double preco): Quarto(numero, checkout, ocupacao, cliente),
 _tipo(tipo),
 _preco(preco) {}

std::string QuartoVIP::get_tipo() {
    return _tipo;
}

double QuartoVIP::get_preco() {
    return _preco;
}
