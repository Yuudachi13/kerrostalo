#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"

class Kerros
{
public:
    Kerros();

    ~Kerros();

   virtual void maaritaAsunnot();

    double laskeKulutus(double);



    Asunto* as1 = new Asunto();
    Asunto* as2 = new Asunto();
    Asunto* as3 = new Asunto();
    Asunto* as4 = new Asunto();

};

#endif // KERROS_H
