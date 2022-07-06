#include <string>
#include "quartos.hpp"
#include "vip.hpp"

QuartoVIP::QuartoVIP(): Quarto(0, 0,1,"NULL"),
 tipo("VIP"),
 preco(10.0) {};

QuartoVIP::QuartoVIP(int _numero, int _checkout, std::string cliente): Quarto(_numero, _checkout,true,cliente),
 tipo("VIP"),
 preco(10.0) {};


std::string QuartoVIP::get_tipo() {
    return tipo;
}

double QuartoVIP::get_preco() {
    return preco;
}