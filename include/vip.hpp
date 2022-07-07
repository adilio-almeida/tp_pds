#ifndef VIP_H
#define VIP_H

#include <string>
#include "./quartos.hpp"

using namespace std;

class QuartoVIP: public Quarto {
private:
  string _tipo;
  double _preco;
public:

  QuartoVIP(int numero , int checkout, bool ocupacao, std::string cliente, string tipo, double preco);
  string get_tipo();
  double get_preco();

};

#endif