#include "H.h"
#include <cmath>

double h(const double x, const double y)
{
    return (x * x + y * y) / (1 + x * x + x * x * y * y);
}
