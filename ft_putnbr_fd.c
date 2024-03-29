#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        if (n <= -10)
            ft_putnbr_fd(n / 10 * -1, fd);
        ft_putchar_fd(n % 10 * -1 + '0', fd);
    }
    else
    {
        if (n >= 10)
            ft_putnbr_fd(n / 10, fd);
        ft_putchar_fd(n % 10 + '0', fd);
    }
}
