#include <iostream>
#include "Ryba.h"
#include <vector>

using namespace std;

int main() {
    vector<Ryba> tablicaRyb(10);

    for(int i = 0; i < tablicaRyb.size(); i++) {
       tablicaRyb[i].ktora_ryba = i + 1;
       tablicaRyb[i].wczytaj_rybe();
       tablicaRyb[i].pokaz_rybe();
    }

    return 0;
}
