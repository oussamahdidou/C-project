#ifndef KIT_DE_VOYAGE_H
#define KIT_DE_VOYAGE_H
#include"offre_combinee.h"
#include"affichable.h"
#include"vector"
class Kit_de_voyage:public Affichable
{
    std::vector<const Option_voyage*> kitvoyage;
    string depart;
    string destination;
    public:
Kit_de_voyage(string,string);
   void ajouter_option(Option_voyage* );
   void annuler();

};

#endif // KIT_DE_VOYAGE_H
