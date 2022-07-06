#ifndef VIP_H
#define VIP_H

#include <string>
#include "quartos.hpp"

class QuartoVIP : public Quarto {
private:
  std::string tipo;
  double preco;
public:

  QuartoVIP();
  QuartoVIP(int _numero, int _checkout, std::string cliente);
  std::string get_tipo();
  double get_preco();

};

#endif