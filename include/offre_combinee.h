#ifndef OFFRE_COMBINEE_H
#define OFFRE_COMBINEE_H
#include"Sejour.h"
#include"transport.h"

class offre_combinee : public Sejour,public transport
{
    public:
        offre_combinee(char*p,double a,int b,double c,bool d=false);
        virtual ~offre_combinee();
        double prix();

    protected:

    private:
};

#endif // OFFRE_COMBINEE_H
