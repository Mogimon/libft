#include "libft.h"

void * ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char   *d;
    const unsigned char *s = (const unsigned char *)src;

    d = (unsigned char   *)dst;
    if(!d && !s)
        return NULL;
    if(d < s) // work as overlap in memcpy
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
        s = s + (len - 1);
        d = d + (len - 1);
        while(len > 0) // memory overlap protection
        {
           *d = *s;
           d--;
           s--;
           len--;
        }
    }
    return dst;
}

