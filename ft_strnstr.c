#include "libft.h"

char * ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  m;
    size_t  n;

    m = 0;
    n = 0;
    if (needle[0] == 0)
        return ((char *)haystack);
    while(haystack[m] && m < len)
    {
        while(haystack[m + n] == needle[n] && haystack[m - n] && m + n < len)
        {
            n++;
            if(needle[n] == 0)
                return ((char *)haystack + m);
        }
        m++;
        n = 0;
    }
    return (0);
}