#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake

double obliczMake(const std::vector<Tagliatelle>& wek)
{
    double M = 0;
    auto it = wek.crbegin();
    int i = 0;
    for (it ; it != wek.crend() ; it++)
    {
        M += it -> ileMaki(++i);
    }
    if (M > 100.)
        throw 1;
    if (M > 50.)
        throw 1.;
    return M;


    return M;
}