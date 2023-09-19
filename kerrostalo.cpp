#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout<<"kerrostalo luotu "<< endl;
}

Kerrostalo::~Kerrostalo()
{
    cout<<"kerrostalo tuhottu "<< endl;
}


void Kerrostalo::maaritaKokoVitunKerros()
{

    cout <<"maaritellaan koko kerrostalon kaikki asunnot" << endl;

    eka.maaritaAsunnot(2);
    toka.maaritaAsunnot2(4);
    kolmas.maaritaAsunnot2(4);


}

double Kerrostalo::laskeKulutus(double)
{

    int kerrostaloAsuntojenmaara = eka.asuntomaara + toka.asuntomaara2 + kolmas.asuntomaara2 + eka.asuntomaara2;
    int kerrosTaloKulutus = kerrostaloAsuntojenmaara * eka.as1.neliot * eka.as1.asukasMaara;
    cout <<"kerros talon kulutus, ="<< kerrosTaloKulutus<< endl;


}

