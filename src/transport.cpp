#include "transport.h"

transport::transport(char* p,double a,bool b):Option_voyage(p,a){dist=b;  if(dist)prix=Tarif_LONG;else prix=Tarif_BASE;}

int   transport::Tarif_LONG=1500;
int   transport::Tarif_BASE=200;
transport::~transport()
{
    //dtor
}
