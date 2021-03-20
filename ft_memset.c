#include <stdlib.h>

void    *ft_memset(void *dest, int c, size_t n)
{
    int     i;
    char    *arr;

    i = 0;
    arr = (char *)dest;
    while (i < n)
    {
        arr[i] = c;
        i++;
    }
    return (dest);
}
