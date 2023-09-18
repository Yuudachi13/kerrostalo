#ifndef KERROSTALO_H
#define KERROSTALO_H


#include "katutaso.h"
#include "kerros.h"
class Kerrostalo
{
public:
    Kerrostalo();
    ~Kerrostalo();
    double laskeKulutus(double);

private:

    Katutaso eka;
    Kerros kolmas;
    Kerros toka;
};

#endif // KERROSTALO_H
