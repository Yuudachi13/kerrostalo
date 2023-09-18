#ifndef KATUTASO_H
#define KATUTASO_H
#include "kerros.h"

class Katutaso:public Kerros
{
public:
    Katutaso();

   ~Katutaso();

   void maaritaAsunnot(int);

   double laskeKulutus(double);

   int asuntomaara;


   Asunto as1;
   Asunto as2;
};

#endif // KATUTASO_H
