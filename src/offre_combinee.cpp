#include "offre_combinee.h"


offre_combinee::offre_combinee(char*p,double a,int b,double c,bool d):Sejour(p,a,b,c),transport(p,a,d){}

double offre_combinee::prix(){
return (Sejour::total+transport::prix)*0.75;
}

offre_combinee::~offre_combinee()
{
    //dtor
}
