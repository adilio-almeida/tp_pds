#include <string>
#include <iostream>
#include "../../include/quartos.hpp"
#include "../../include/vip.hpp"
#include "../../include/hotel.hpp"

using namespace std;

Hotel::Hotel() {
    
    for(int i = 0 ; i < 100 ; i++) {
        
        quartos.push_back(QuartoVIP(i, 0, false, "SUS", "vip", 50.00));

    }

}

bool Hotel::faz_checkin() {
    return false;
}

bool Hotel::faz_checkout() {
    return false;
}

void Hotel::imprime_quartos(bool ocupado) {

    for(int i = 0 ; i < 100 ; i++) {
        cout << quartos[i].get_tipo() << endl;
    }

}