#include <string>
#include <iostream>

#include "../../include/hotel.hpp"


using namespace std;

/** @brief Classe responsável por inicializar os quartos.

    Inicializa 100 quartos, sendo 80 stantard e 20 vips
    @author Adilio
    @date Julho 2022 
*/

Hotel::Hotel()
{
    
    for(int i = 0 ; i < 80 ; i++) {
        
        Quarto *quarto = new QuartoSTD(i, 0, false, "",false);
        quartos.push_back(quarto);
    }

    for(int i = 0 ; i < 20 ; i++) {
        
        Quarto *quarto = new QuartoVIP(i + 80, 0, false, "", false);
        quartos.push_back(quarto);

    }

}

/** @brief Método checkin.

    Realiza check in em um quarto vazio
    @author Bruno Lages
    @date Julho 2022 
*/

void Hotel::faz_checkin()
{

    int numq = 0;
    int numdias = 0;
    char tip;
    string nome;

    cout << "Para fazer um checkin, digite por favor:\n \n 1. Um numero de quarto disponivel \n 2. Um tipo de quarto: ";
    cout << "S para Standard e V para VIP (Numeros 80 a 99) \n"
         << " 3. Quantos dias voce pretende ficar\n 4. Seu nome \n " << endl;
    cin >> numq;
    cin >> tip;
    cin >> numdias;
    cin >> nome;

    if (numq < 1 || numq > 99)
        throw(QuartoInvalido());

    if (numdias < 1)
        throw(CheckoutInvalido());

    if (quartos[numq]->get_ocupacao())
        throw(QuartoInvalido());

    if (tip != 'S' && tip != 'V' && tip != 's' && tip != 'v')
        throw(QuartoInvalido());

    delete quartos[numq];

    if (tip == 'V' || tip == 'v'){
        if (numq < 80)
            throw(TipoQuartoInvalido());
        Quarto *b = new QuartoVIP(numq, numdias, true, nome);
        quartos[numq] = b;
    }
    else if (tip == 'S' || tip == 's'){
        Quarto *c = new QuartoSTD(numq, numdias, true, nome);
        quartos[numq] = c;
    }
    else
        throw(CheckInInvalido());
}

/** @brief Método checkout.

    Realiza check in em um quarto ocupado
    @author Bruno Lages
    @date Julho 2022 
*/

void Hotel::faz_checkout(){

    cout << "\nDigite o numero de um quarto ocupado para fazer checkout\n";
    int n;
    cin >> n;

    if (n < 0 || n > 99 || quartos[n]->get_ocupacao() == 0)
        throw(CheckoutInvalido());

    double preco = quartos[n]->get_checkout() * quartos[n]->get_preco();
    cout << "\nDados do quarto:";
    quartos[n]->imprime_dados();
    cout<< "\nVoce tem certeza que deseja realizar o Checkout?\nDigite 'S' para confirmar\n";
    
    char confirmacao;
    cin >> confirmacao;

    if(confirmacao == 'S' || confirmacao == 's'){

    delete quartos[n];
    Quarto *a = new QuartoSTD();
    quartos[n] = a;

    cout << "\nO preco total da estadia foi de " << preco << " reais.\nAgradecemos sua estadia e volte sempre!\n\n";
    }
}

/** @brief Método serviços pendentes.

    Verifica se o quarto tem algum serviço requisitado pelo cliente e exibe
    @author J. Monteiro
    @date Julho 2022 
*/

void Hotel::servicos_pendentes() {

    int aux=0;
    for(int i = 0 ; i < 100 ; i++) {
            if(quartos[i]->get_ocupacao() && quartos[i]->get_servico())
                cout << "\nQuarto de numero " << i << " necessita de servico de quarto!" << endl;
            else
                aux++;
        }
    if(aux==100)
        cout << "\nNenhum quarto necessita de servicos!\n";
}

/** @brief Método pedir serviço de quarto.

    Feito para o cliente requisitar um serviço de quarto genérico.
    @author J. Monteiro
    @date Julho 2022 
*/

void Hotel::pedir_servQuarto() {

    int quart = -1;
    cout << "\nQual o quarto a ser atendido?" << endl;
    cin >> quart;

    if(quart < 0 || quart > 99)
        throw(QuartoInvalido());
    else if(quartos[quart]->get_servico())
        cout << "\nEste quarto ja pediu serviços!";
    else if(!quartos[quart]->get_ocupacao())
        cout << "\nEste quarto esta vazio!";
    else
        quartos[quart]->set_servico(true);
    

}

/** @brief Método serviço de quarto realizado.

    SInaliza que um determinado quarto teve suas pendências resolvidas
    @author J. Monteiro
    @date Julho 2022 
*/

void Hotel::servicoQuarto() {

    int quart = -1;
    cout << "\nQual o quarto atendido?" << endl;
    cin >> quart;

    if(quart < 0 || quart > 99)
        throw(QuartoInvalido());
    else if(!quartos[quart]->get_servico())
        cout << "\nEste quarto nao necessita de servicos!";
    else
        quartos[quart]->set_servico(false);
    
}

/** @brief Método imprimir quartos .

    Recebe um status de ocupação e imprime os quartos correspondentes.
    @author Adilio
    @date Julho 2022 
*/

void Hotel::imprime_quartos(bool ocupado){

    cout << endl;

    if (ocupado){
        int x = 0;
        for (int i = 0; i < 100; i++){
            if (quartos[i]->get_ocupacao()){
                quartos[i]->imprime_dados();
                x++;
            }
        }
        if(!x)
            cout << "\nO hotel estah vazio ;-;\n";
    }

    else{
        for (int i = 1; i < 10; i++){
            if (quartos[i]->get_ocupacao() == 0)
                cout << "|0" << quartos[i]->get_numero() << "| ";
            else
                cout << "     ";
        }

        for (int i = 10; i < 100; i++){
            if (quartos[i]->get_ocupacao() == 0)
                cout << "|" << quartos[i]->get_numero() << "| ";
            else{
                cout << "     ";
            }
            if ((i) % 10 == 0)
            cout << endl;
        }
        cout << endl;
    }

    cout << endl;
}