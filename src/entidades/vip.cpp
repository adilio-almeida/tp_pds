#include <string>
#include "../../include/vip.hpp"

/** @brief Classe quarto Vip

    Herda as própriedades do Quarto para criar um quarto vip.
    @author Adilio
    @date Julho 2022 
*/

QuartoVIP::QuartoVIP(int _numero, int _checkout, bool _ocupacao, std::string _cliente, bool _servico): Quarto(_numero, _checkout, _ocupacao, _cliente, _servico),
 tipo("VIP"),
 preco(20.00) {}

 /** @brief Getters do quarto standard

    Retorna o tipo e preço do quarto
    @author Adilio
    @date Julho 2022 
*/

std::string QuartoVIP::get_tipo() {
    return tipo;
}

double QuartoVIP::get_preco() {
    return preco;
}

/** @brief Método imprimir dados do quarto vip

    Imprime quantos dias faltam para o checkout e o hospede que nele está.
    @author J Monteiro
    @date Julho 2022 
*/

void QuartoVIP::imprime_dados() {

    std::cout << "\n***** Quarto VIP ******\n";
    std::cout << "Numero: "<< this->get_numero() << " " << "\nDias para CheckOut: "<<  this->get_checkout() 
    << "\nNome hospede: " << this->get_cliente() << "\n***** ----------- *****\n";

}

