#include "libft.h"

size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t s;

    s = ft_strlen(src);
    if(s + 1 < dstsize)
        ft_memcpy(dst, src, s + 1);
    else if(dstsize != 0)
    {   ft_memcpy(dst, src, s - 1);
        dst[dstsize - 1] = 0;
    }
    return (s);
}