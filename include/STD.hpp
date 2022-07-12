#ifndef STD_H
#define STD_H

#include <string>
#include "./quarto.hpp"

using namespace std;


class QuartoSTD: public Quarto {
protected:
  string tipo;
  double preco;
public:

  QuartoSTD(int _numero = 0, int _checkout = 0, bool _ocupacao = false , std::string _cliente = "SUS");
  string get_tipo();
  void imprime_dados();
  double get_preco();

};


#endif