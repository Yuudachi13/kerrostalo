#include "asunto.h"

Asunto::Asunto()
{
    cout <<"asunto luotu"<< endl;
}

Asunto::~Asunto()
{
    cout <<"asunto tuhottu"<< endl;
}

void Asunto::maarita(int asukkaat, int nelio)
{

    asukasMaara = asukkaat;
    neliot = nelio;
    cout <<"asunto maaritetty, asukkaita = " << asukasMaara <<" nelioita = " << neliot << endl;

}


double Asunto::laskeKulutus(double hinta)
{
    hinto = hinta;

    double Kulutus = asukasMaara * neliot * hinto;
    cout <<"asunnon kulutus, kun hinta = " << hinto << " on " << Kulutus << endl;

}
