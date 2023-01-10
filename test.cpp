#include <string>
#include <iostream>
int main()
{
    std::string s ="arbuz";
    std::cout << s[0] << std::endl;
    std::cout << s[s.length()-1] << std::endl;
    return 0;
}