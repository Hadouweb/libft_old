#include "libft.h"

void    ft_putnbr(int n)
{
    if (n < 0)
    {
        ft_putchar('-');
        if (n <= -10)
            ft_putnbr(n / 10 * -1);
        ft_putchar(n % 10 * -1 + '0');
    }
    else
    {
        if (n >= 10)
            ft_putnbr(n / 10);
        ft_putchar(n % 10 + '0');
    }
}
