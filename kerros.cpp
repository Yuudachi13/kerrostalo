#include "kerros.h"
Kerros::Kerros()
{
    cout <<"kerros luotu"<< endl;
}
Kerros::~Kerros()
{
    cout <<"kerros tuhottu"<< endl;
}

void Kerros::maaritaAsunnot2(int asuntoja)
{
    asuntomaara2 = asuntoja;
    cout <<"maaritetaan katutason kerrokselta perittyja asuntoja"<< endl;

    cout <<"maaritetaan " << asuntoja << " kpl kerroksen asuntoja " <<  endl;

    as1.maarita(2,100);
    as2.maarita(2,100);
    as3.maarita(2,100);
    as4.maarita(2,100);
}



double Kerros::laskeKulutus2(double)
{
    int asunnot2 = asuntomaara2;

    int kokonaiskulutus2 = asunnot2 * 100 * 2;

    cout << "kerroksen kulutus " << kokonaiskulutus2 << endl;


}
