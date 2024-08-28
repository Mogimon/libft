#include "libft.h"
void* ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    unsigned char *d;
    const unsigned char *s = (const unsigned char *)src;

    d = (unsigned char *)dst;
    if(!d && !s)
        return NULL;
    while(n > 0)
    {
        *d = *s;
        d++;
        s++;
        n--;
    }
    return dst;
}
// int main ()
// {
//     char b[] = "42 bangkok";
//     printf("%s\n", b);
//     ft_memcpy (b,'m',20);
//     // memcpy (b,'m',20);
//     printf("%s\n", b);
// }