#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

// tutaj klasa Penne
class Penne : public Makaron
{

public:
    double ileMaki(unsigned P) const override{return static_cast<double>(P);}
};
// tutaj definicja metody gotujMakaron
Makaron* Makaron::gotujMakaron(const std::string& s) 
{
    if (s[0]==(s.length()-1))
        return new Tagliatelle(3.14, .42, .1);
    else
        return new Penne();
}