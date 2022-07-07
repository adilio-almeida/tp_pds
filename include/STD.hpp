#ifndef STD_H
#define STD_H

#include <string>
#include "./quartos.hpp"

using namespace std;


class QuartoSTD: public Quarto {
protected:
  string tipo;
  double preco;
public:

  QuartoSTD(int _numero = 0, int _checkout = 0, bool _ocupacao = false , std::string _cliente = "SUS");
  string get_tipo();
  double get_preco();
  void imprime_dados();

};


#endif