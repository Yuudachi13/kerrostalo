#include "kerros.h"
Kerros::Kerros()
{
    cout <<"kerros luotu"<< endl;
}
Kerros::~Kerros()
{
    cout <<"kerros tuhottu"<< endl;
}

void Kerros::maaritaAsunnot()
{


    cout <<"maaritetaan 4 kpl kerroksen asuntoja " <<  endl;
    as1->maarita(2,100);
    as2->maarita(2,100);
    as3->maarita(2,100);
    as4->maarita(2,100);
}



double Kerros::laskeKulutus(double hinta)
{


    double kulutus = hinta * (as1->asukasMaara * as1->neliot) + (as2->asukasMaara * as2->neliot) + (as3->asukasMaara * as3->neliot) + (as4->asukasMaara * as4->neliot);

   return kulutus;


}
