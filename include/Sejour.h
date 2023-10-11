#ifndef SEJOUR_H
#define SEJOUR_H
#include "Option voyage.h"
class Sejour:public virtual Option_voyage
{   protected:
    int nbr_nuit;
    double total;
    double prix;
    public:
        Sejour(char*p,double a,int b,double c);
        virtual ~Sejour();


};

#endif // SEJOUR_H
