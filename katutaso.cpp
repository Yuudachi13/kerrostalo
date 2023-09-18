#include "katutaso.h"
#include "asunto.h"
Katutaso::Katutaso()
{
    cout <<"katutaso luotu"<< endl;
}

Katutaso::~Katutaso()
{
    cout <<"katutaso tuhottu"<< endl;
}

void Katutaso::maaritaAsunnot(int maara)
{

    asuntomaara = maara;
    cout <<"maaritetaan "<< maara <<" klp katutason asuntoja"<< endl;

    as1.maarita(2,100);
    as2.maarita(2,100);
}

double Katutaso::laskeKulutus(double)
{

  int asunnot = asuntomaara2 + asuntomaara;
  int kokonaiskulutus = asunnot * 100 * 2;
    cout <<"katutason ja perityn kerroksen kulutus " << kokonaiskulutus << endl;
}
