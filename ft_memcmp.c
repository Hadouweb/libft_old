#include <string.h>
#include <stdio.h>

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char   *str1;
    unsigned char   *str2;
    size_t          i;

    i = 0;
    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;

    while(i < n && str1[i] == str2[i])
        i++;
    return (str1[i] - str2[i]);
}

int main ()
{
    char str1[15];
    char str2[15];
    int ret;

    memcpy(str1, "abcdec", 6);
    memcpy(str2, "abcdeb", 6);

    ret = ft_memcmp(str1, str2, 6);
    
    printf("%d\n", ret);

    return(0);
}
