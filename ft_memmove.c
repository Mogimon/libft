#include "libft.h"

void * ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char   *d;
    const unsigned char *s = (const unsigned char *)src;
    size_t l;

    d = (unsigned char   *)dst;
    l = 0;
    if(!d && !s)
        return NULL;
    if(s < d) // work as overlap in memcpy
    {
        while(len > 0)
        {
         *d = *s;
         d++;
         s++;
         len--;
        }
    }
    else
    {
        while(l < len) // memory overlap protection
        {
           *d = *s;
           d++;
           s++;
           l++;
        }
    }
    return dst;
}

