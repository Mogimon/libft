#include "libft.h"

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t d;
    size_t s;

    s = ft_strlen(src);
    d = ft_strlen(dst);

    if(d >= dstsize)
        d = dstsize;
    if(d == dstsize)
        return (dstsize + s);
    if(s < dstsize - d)
        ft_memcpy(dst + d, src, s + 1);
    else
    {
        ft_memcpy(dst + d, src,dstsize - d - 1);
        dst[dstsize - 1] = '\0';
    }
    return (d + s);
}