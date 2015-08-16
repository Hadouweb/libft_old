#include <string.h>
#include <stdio.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char   *src;
    size_t          i;

    i = 0;
    src = (unsigned char *)s;
    if (s)
    {
        while (i < n)
        {
            if (src[i] == c)
                return ((void *)src + i);
            i++;
        }
    }
    return (0);
}

int     main(void)
{
    const char str[] = "http://www.tutorialspoint.com";
    const char ch = 't';
    char *ret;

    ret = ft_memchr(str, ch, strlen(str));

    printf("String after |%c| is - |%s|\n", ch, ret);
    return (0);
}
