#include <iostream>
#include "../include/invsqrt.h"

int main()
{
    float x;
    while(1)
    {
        std::cout << "input a number(press Ctrl+C to exit):";
        std::cin >> x;
        std::cout << Q_rsqrt(x) << std::endl;
    }
}