#include "libft.h"
void* ft_memset(void *b, int c, size_t len)
{
    unsigned char *y;
    y = b;
    size_t l = strlen((char *)b);
    if(l < len)
    {    
        // write(2, "memset will always overflow", 28);
        perror("memset will always overflow");
        return b;
    }
    while(len-- >0)
    {
        *y = c;
        y++;
    }
    *y = '\0';
    return b;
}
// int main ()
// {
//     char b[] = "42 bangkok";
//     printf("%s\n", b);
//     ft_memset (b,'m',20);
//     // memset (b,'m',20);
//     printf("%s\n", b);
// }