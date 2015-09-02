#include "libft.h"

static int  ft_intlen(int n)
{
    size_t  i;

    i = 0;
    if (n < 0)
        i++;
    while (n != 0)
    {
        n /= 10;
        i++;
    }
    return (i);
}

char        *ft_itoa(int n)
{
    char    *str;
    size_t  i;
    int     sign;

    i = ft_intlen(n);
    sign = (n < 0) ? -1 : 1;
    if (n == 0)
        return ("0");
    if ((str = (char *)malloc(i * sizeof(char) + 1)) == NULL)
        return (NULL);
    if (n < 0)
        str[0] = '-';
    while (n != 0)
    {
        str[i - 1] = (n % 10 * sign) + '0';
        n /= 10;
        i--;
    }
    return (str);
}
