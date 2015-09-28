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
    int             i;
    unsigned int    left;
    unsigned int    exp;

    if (max < 0)
        return (0);
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
    left += ft_pow(2,exp);
    return (left);
}

unsigned int    ft_get_right(unsigned int mant, int exp, int left, float n)
{
    unsigned int    right;
    unsigned int    i;
    unsigned int    rep;
    unsigned int    j;
    unsigned int    k;
    float    tmp;
    
    right = mant;
    i = 22;
    while (exp > 0)
    {
        right &= ~(1 << i);
        right <<= 1;
        i--;
        exp--;
    }
    j = 22;
    k = 2;
    while (j > 0)
    {
        if ((right >> j) & 1)
        {
            tmp = 1.0/k * 1000000000;
            printf("%f\n", tmp);
            rep += tmp;
        }
        k *= 2;
        j--;
    }
    printf("%u\n", rep);
    ft_print_bit(right, 23);
    
    return (rep);
}

void            ft_putnbr_float(float n)
{
    unsigned int    f;
    unsigned int    mant;
    unsigned int    sign;
    unsigned int    exp;
    int             left;
    int             right;

    f = *(unsigned int *) &n;
    sign = f >> 31;
    exp = (f >> 23) & 0xff;
    mant = f & 0x7fffff;

    printf("Exp : %d\n", exp - 127);
    printf("Mant : \n");
    ft_print_bit(mant, 23);

    left = ft_get_left(mant, 23, (exp - 127));
    right = ft_get_right(mant, (exp - 127), left, f);

    if (sign)
      ft_putchar('-');
    ft_putnbr(left);
    ft_putchar('.');
    ft_putnbr(right);
}

int             main(void)
{
    ft_putnbr_float(10.123);
    printf("\n%.10f\n", 10.12300001);
    return (0);
}
