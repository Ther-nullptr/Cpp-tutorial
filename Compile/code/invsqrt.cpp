#include <iostream>
#define DEBUG
#define PI 3.14

float Q_rsqrt(float number)
{
    long i;
    float x2, y;
    const float threehalfs = 1.5F;

#ifdef DEBUG
    std::cout << "Debug version" << std::endl;
#else
    std::cout << "Release version" << std::endl;
#endif
    std::cout << PI << std::endl;

    x2 = number * 0.5F;
    y = number;
    i = *(long *)&y;           // evil floating point bit level hacking
    i = 0x5f3759df - (i >> 1); // what the fuck?
    y = *(float *)&i;
    y = y * (threehalfs - (x2 * y * y)); // 1st iteration
    return y;
}