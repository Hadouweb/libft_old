#include "libft.h"

int     ft_atoi(const char *nptr)
{
    int     nbr;
    int     sign;
    size_t  i;

    nbr = 0;
    i = 0;
    while (nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\v' ||
            nptr[i] == '\r' || nptr[i] == '\f' || nptr[i] == ' ')
        i++;
    sign = (nptr[i] == '-') ? -1 : 1;
    if (nptr[i] == '-' || nptr[i] == '+')
        i++;
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        nbr *= 10;
        nbr += (int)(nptr[i] - '0');
        i++;
    }
    return (sign * nbr);
}
