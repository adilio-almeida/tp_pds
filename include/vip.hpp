#ifndef VIP_H
#define VIP_H

#include <string>
#include "./quartos.hpp"
#include "./hotel.hpp"

using namespace std;

class QuartoVIP: public Quarto {
protected:
  string tipo;
  double preco;
public:

  QuartoVIP(int _numero = 0, int _checkout = 0, bool _ocupacao = false , std::string _cliente = "SUS");
  string get_tipo();
  double get_preco();

};

#endif