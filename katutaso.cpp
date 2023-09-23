#include "katutaso.h"

Katutaso::Katutaso()
{
    cout <<"katutaso luotu"<< endl;
}

Katutaso::~Katutaso()
{
    cout <<"katutaso tuhottu"<< endl;
}

void Katutaso::maaritaAsunnot()
{


    cout <<"maaritetaan 2 klp katutason asuntoja"<< endl;

    as1.maarita(2,100);
    as2.maarita(2,100);
    cout <<"maaritetaan katutason kerrokselta perittyja asuntoja"<< endl;
    Kerros::maaritaAsunnot();
}

double Katutaso::laskeKulutus(double hinta)
{

    double kulutus = hinta * (as1.asukasMaara * as1.neliot) + (as2.asukasMaara * as2.neliot) + (Kerros::as1.asukasMaara * Kerros::as1.neliot) + (Kerros::as2.asukasMaara * Kerros::as2.neliot) + (Kerros::as3.asukasMaara * Kerros::as3.neliot) + (Kerros::as4.asukasMaara * Kerros::as4.neliot);

    return kulutus;
}
