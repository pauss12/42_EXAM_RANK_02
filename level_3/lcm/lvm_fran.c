
#include <unistd.h>
#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
        unsigned int    divider;
        unsigned int    found;
        divider = 1;
        found = 0;
        if ((int) a < 0 || (int) b < 0)
               return (0);
        if (!(a % b))
                return (a);
        if (!(b % a))
                return (b);
        if (a % b && b % a)
                return (a * b);
        while (divider <= a && divider <= b && ! found)
                if (!(a % divider) && !(b % divider))
                        found = 1;
                else
                        divider++;
        return ((a * b) / divider);
}
