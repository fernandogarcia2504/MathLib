#include <math.h>
#include <stdexcept>

double my_sqrt(double x)
{
    if (x < 0)
    {
	    throw std::runtime_error("Negative argument");
    }
    return sqrt(x);
}
