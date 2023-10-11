#include "Sejour.h"

Sejour::Sejour(char*p,double a,int b,double c):Option_voyage(p,a){nbr_nuit=b;prix=c; total=prix*nbr_nuit;}


Sejour::~Sejour()
{
    //dtor
}
