#include "libft.h"
#include <stdio.h>
void    ft_print_bit(unsigned int value, int size)
{
    while (size)
    {
        size--;
        if ((value >> size) & 1)
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}

int             ft_pow(int a, int b)
{
    int     r;

    r = 1;
    while (b)
    {
        r *= a;
        b--;
    }
    return (r);
}

unsigned int    ft_get_left(unsigned int value, int size, int max)
{
    int i;
    unsigned int left;
    unsigned int exp;

    i = size - 1;
    left = 0;
    exp = max;
    while (i >= 0 && max > 0)
    {
        left = left | (value >> i); 
        i--;
        max--;
        left <<= 1;
    }
    left = left >> 1;
    //left += ft_pow(2,exp);
    return (left);
}

unsigned int    ft_get_right(unsigned int value, int exp, int left, float n){
    int i;
    unsigned int right;
    unsigned int    *p;

    ft_print_bit(n, 32);
    i = 23;
    right = 0;
    value = ((value & 0x7fffff) << exp) & 0x7fffff;
    value = value >> exp;
    p = (unsigned int *)&n;
    *p &= 0xff800000;
    ft_print_bit(value, 32);
    *p |= value;
    ft_print_bit(*p, 32);
    n *= 1000000;
    left = ft_get_left(n, 23, exp);
    ft_putnbr(left);
    while (i > 0)
    {
        i--;
        right = right | (value >> i);
        right <<= 1;
    }
    return (right);
}

void            ft_putnbr_float(float n)
{
    unsigned int    i;
    unsigned int    mant;
    unsigned int    sign;
    unsigned int    exp;
    int             left;
    int             right;

    i = *(unsigned int *) &n;
    sign = i >> 31;
    exp = (i >> 23) & 0xff;
    mant = i & 0x7fffff;

    printf("Exp : %d\n", exp - 127);
    printf("Mant : ");
    ft_print_bit(mant, 23);

    left = ft_get_left(mant, 23, (exp - 127));
    right = ft_get_right(mant, (exp - 127), left, i);

    if (sign)
      ft_putchar('-');
    ft_putnbr(left);
    ft_putchar('.');
    ft_putnbr(right);
}

int             main(void)
{
    ft_putnbr_float(123.125);
    return (0);
}
