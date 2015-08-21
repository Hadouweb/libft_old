#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int     ft_intlen(int n)
{
    size_t  i;

    i = 0;
    if (n < 0)
    {
        i++;
        n *= -1;
    }
    while (n > 0)
    {
        n /= 10;
        i++;
    }
    return (i);
}

char    *ft_itoa(int n)
{
    char    *str;
    size_t  i;

    i = ft_intlen(n);
    printf("i %zu\n", i);
    if (n == 0)
        return ("0");
    if ((str = (char *)malloc(i * sizeof(char) + 1)) == NULL)
        return (NULL);
    if (n < 0)
    {
        str[0] = '-';
        n *= -1;
    }
    while (i > 0)
    {
        str[i - 1] = n % 10 + '0';
        printf("%zu %c\n", i, str[i]);
        n /= 10;
        i--;
    }
    return (str);
}

int     main(int argc, char **argv)
{
    int     n;
    if (argc > 1)
    {
        n = ft_atoi(argv[1]);
        printf("rep : %s\n", ft_itoa(n));
    }
    return (0);
}
