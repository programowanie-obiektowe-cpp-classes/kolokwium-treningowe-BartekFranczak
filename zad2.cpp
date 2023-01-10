#include <string>

class Makaron
{

public:
    virtual ~Makaron()=default;
    virtual double ileMaki(unsigned) const =0;
    static Makaron* gotujMakaron(const std::string& s) 
    {
        if (s[0]==(s.length()-1)){return new Tagliatelle(3.14, 0.42, 0.1);}
        else{return new Penne();}
    }
};


class Tagliatelle : public Makaron
{
    double L;
    double W;
    double R;
    static const double C;
public:
    Tagliatelle() : L{0.5}, W{0.5}, R{0.5}{}
    Tagliatelle(double l, double w, double r) : L{l}, W{w}, R{r} {}
    double ileMaki(unsigned P) const override{return static_cast<double>(P) * L * W * (1. - R) * C;}
};

class Penne : public Makaron
{

public:
    double ileMaki(unsigned P) const override{return static_cast<double>(P);}
};