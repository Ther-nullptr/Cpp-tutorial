#include <math.h>
#include "../include/mysqrt.h"

double mysqrt(double x)
{
    double b = sqrt(x);
    if (b != b) // NaN check
    {
        return -1.0;
    }
    else
    {
        return sqrt(x);
    }
}