#include "Ryba.h"
#include<iostream>
#include<fstream>

void Ryba::wczytaj_rybe()
{
    fstream fout("Ryby.txt", ios::in);
    int nrLini = (ktora_ryba - 1) * 4 + 1;
    int licznik = 1;
    string linia;

    if(fout.good()) {
        while(getline(fout, linia)) {
            if (licznik == nrLini) gatunek = linia;
            if (licznik == nrLini + 1) wymiar = linia;
            if (licznik == nrLini + 2) okres = linia;
            if (licznik == nrLini + 3) ile_sztuk = linia;

            licznik++;
        }
    } else {
        cout << "Brak pliku" << endl;
    }

    fout.close();
}

void Ryba::pokaz_rybe()
{
    cout << "================================================" << endl;
    cout << gatunek << endl;
    cout << "Wymiar ochronny: " << wymiar << endl;
    cout << "Okres ochronny: " << okres << endl;
    cout << "Ile sztuk na dobe: " << ile_sztuk << endl;
    cout << "================================================" << endl;
}
