#ifndef VIP_H
#define VIP_H

#include <string>
#include "quarto.hpp"

class QuartoVIP: public Quarto {
protected:
  std::string tipo;
  double preco;
public:

  QuartoVIP(int _numero = 0, int _checkout = 0, bool _ocupacao = false , std::string _cliente = "SUS", bool _servico = false);
  std::string get_tipo();
  void imprime_dados();
  double get_preco();

};


#endif