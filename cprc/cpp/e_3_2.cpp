#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

int main(){

    std::vector<double> homework;
    double x;
    while(std::cin >> x)
        homework.push_back(x);
    typedef std::vector<double>::size_type vec_sz;
    vec_sz size = homework.size();
    if(size == 0){
        std::cout << std::endl << "Nothing input" << std::endl;
        return 1;
    }
    std::sort(homework.begin(), homework.end());
    vec_sz mid = size / 2;
    double median;
    median = size % 2 == 0?(homework[mid-1] + homework[mid])  / 2 : homework[mid];
    std::streamsize prec = std::cout.precision();
    std::cout << std::setprecision(3) << median << std::setprecision(prec) << std::endl;
    return 0;
}