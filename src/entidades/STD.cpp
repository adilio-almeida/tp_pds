#include <string>
#include "../../include/std.hpp"

/** @brief Classe quarto Standard

    Herda as própriedades do Quarto para criar um quarto padrão.
    @author J Monteiro
    @date Julho 2022 
*/

QuartoSTD::QuartoSTD(int _numero, int _checkout, bool _ocupacao, std::string _cliente, bool _servico): Quarto(_numero, _checkout, _ocupacao, _cliente, _servico),
 tipo("STD"),
 preco(4.00) {}

/** @brief Getters do quarto standard

    Retorna o tipo e preço do quarto
    @author J Monteiro
    @date Julho 2022 
*/

std::string QuartoSTD::get_tipo() {
    return tipo;
}

double QuartoSTD::get_preco() {
    return preco;
}

/** @brief Método imprimir dados do quarto standard

    Imprime quantos dias faltam para o checkout e o hospede que nele está.
    @author J Monteiro
    @date Julho 2022 
*/

void QuartoSTD::imprime_dados() {

    std::cout << "\nQuarto Standard\n";
    std::cout << "Numero: "<< this->get_numero() << " " << "\nDias para CheckOut: "<<  this->get_checkout() 
    << "\nNome hospede: " << this->get_cliente() << std::endl;

}

