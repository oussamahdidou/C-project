#include "Kit_de_voyage.h"

Kit_de_voyage::Kit_de_voyage(string p,string c){
depart=p;
destination=c;
}
void Kit_de_voyage::ajouter_option(Option_voyage *a ){
kitvoyage.push_back(a);
}
void Kit_de_voyage::annuler(){
kitvoyage.clear();
}
