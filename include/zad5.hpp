#include "zad1.hpp"

#include <algorithm>
#include <iterator>
#include <deque>
#include <random>
#include <vector>

// tutaj funkcja sortujTagliatelle
struct foo
{
    template <typename T>
    bool operator()(T const &a, T const &b){return a>b;};
};

template<typename T, typename K>

K sortujTagliatelle(T a, T b)
{
    return std::for_each(a,b,foo());
}
