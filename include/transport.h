#ifndef TRANSPORT_H
#define TRANSPORT_H
#include "Option voyage.h"

class transport:public virtual Option_voyage
{  public:
int   static Tarif_LONG;
int   static  Tarif_BASE;

protected:
bool dist;
double prix;
    public:
        transport(char* p="rftgyhj",double a=1,bool b=false);
        virtual ~transport();


};

#endif // TRANSPORT_H
