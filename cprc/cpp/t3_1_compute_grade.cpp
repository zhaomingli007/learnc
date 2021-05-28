#include <iostream>
#include <ios>
#include <iomanip>
#include <string>

int main()
{
    std::streamsize prec = std::cout.precision();

    std::cout << std::setprecision(3) << 0.238243 << std::setprecision(prec) << std::endl;
    printf("%0.3f\n", 0.238243);
    return 0;
}
