#include "Option voyage.h"
#include<string.h>
#include<ostream>

Option_voyage::Option_voyage(char* p,double a)
{
   char *nom=new char[strlen(p)+1];
   strcpy(nom,p);
   prix_forfaitaire=a;
}

Option_voyage::~Option_voyage()
{
  delete[] nom;
}
char*Option_voyage::Nom(){
return nom;
}
double Option_voyage::prix(){return prix_forfaitaire; }
void Option_voyage::affiche(std::ostream& out) {
    out << nom << " -> " << prix_forfaitaire << " MAD";
}
