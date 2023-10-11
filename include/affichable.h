#ifndef AFFICHABLE_H
#define AFFICHABLE_H
#include <iostream>
#include<ostream>

using namespace std;
class Affichable {
public:
    virtual void affiche(ostream& out) const = 0;

friend ostream& operator<<(ostream& out, const Affichable& option)
{
option.affiche(out);
return out;
}
};



#endif // AFFICHABLE_H
