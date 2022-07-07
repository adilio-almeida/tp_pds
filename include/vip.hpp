#ifndef VIP_H
#define VIP_H

#include <string>
#include "./quartos.hpp"

class QuartoVIP: public Quarto {
protected:
  std::string tipo;
  double preco;
public:

  QuartoVIP(int _numero = 0, int _checkout = 0, bool _ocupacao = false , std::string _cliente = "SUS");
  std::string get_tipo();
  double get_preco();
  void imprime_dados();

};


#endif