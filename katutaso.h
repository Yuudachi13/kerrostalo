#ifndef KATUTASO_H
#define KATUTASO_H
#include "kerros.h"
#include "asunto.h"
class Katutaso:public Kerros
{
public:
    Katutaso();

   ~Katutaso();

   void maaritaAsunnot() override;

   double laskeKulutus(double);


   Asunto* as1= new Asunto();
   Asunto* as2= new Asunto();
};

#endif // KATUTASO_H
