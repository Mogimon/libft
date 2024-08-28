#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    unsigned char *m;

    m = s;
    while(n > 0)
    {
        *m = 0;
        m++;
        n--;
    }
}