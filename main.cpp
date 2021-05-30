#include "sdt.h"
#include <iostream>
int main()
{
    int a, b, c,d;
    std::cout << "Enter A and B:";
    std::cin >> a >>b;
    c = a + b;
    d = a - b;
    std::cout << "Sum: " << c ;
    std::cout << "Dif: " << d ;
}
