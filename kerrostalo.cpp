#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout<<"kerrostalo luotu "<< endl;
    cout <<"maaritellaan koko kerrostalon kaikki asunnot" << endl;
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
}

Kerrostalo::~Kerrostalo()
{
    cout<<"kerrostalo tuhottu "<< endl;
}

double Kerrostalo::laskeKulutus(double hinta)
{

    double kulutus = eka->laskeKulutus(hinta) + toka->laskeKulutus(hinta) + kolmas->laskeKulutus(hinta);

    cout <<"Koko kerrostalon kulutus =" << kulutus << endl;
    return kulutus;


}

