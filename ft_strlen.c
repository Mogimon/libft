#include "libft.h"

size_t ft_strlen(const char *s)
{
    size_t  m;

    m = 0;
    if(s == NULL)
        return (0);
    while(s != '\0')
    {
        m++;
        s++;
    }
    return (m); 
}