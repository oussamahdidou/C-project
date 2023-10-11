#ifndef OPTION_VOYAGE_H
#define OPTION_VOYAGE_H
#include"affichable.h"
#include <iostream>
#include<ostream>

using namespace std;
class Option_voyage:public Affichable
{   protected:
    char *nom;
    double prix_forfaitaire;
    public:
        Option_voyage(char*,double);
        Option_voyage(){};
        virtual ~Option_voyage();

        char* Nom();
       virtual double prix();
 void affiche(ostream& out);

};


#endif // OPTION VOYAGE_H
