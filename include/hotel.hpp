#ifndef HOTEL_H
#define HOTEL_H

#include <string>
#include <vector>
#include <exception>
#include "./quartos.hpp"
#include "./vip.hpp"

class Erro : public std::exception {
  public:
  virtual const char* what() const noexcept {
    return "Erro Genérico!";
  }
};

class CheckoutInvalido :public Erro {
  public:
    virtual const char* what() const noexcept {
      return "Numero de dias invalido";
    }
};


class Hotel {
private:

std::vector<QuartoVIP> quartos;

public:

Hotel();
bool faz_checkin();
bool faz_checkout();
void imprime_quartos(bool ocupado);

};

#endif