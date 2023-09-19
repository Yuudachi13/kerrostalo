#ifndef KATUTASO_H
#define KATUTASO_H
#include "kerros.h"
#include "asunto.h"
class Katutaso:public Kerros
{
public:
    Katutaso();

   ~Katutaso();

   void maaritaAsunnot(int);

   double laskeKulutus1(double);

   int asuntomaara;


   Asunto as1;
   Asunto as2;
};

#endif // KATUTASO_H
