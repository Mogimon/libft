#include "libft.h"
int ft_isascii(int c)
{
    if(c>=0 && c<=127)
        return 1;
    return 0;
}
int main (void)
{
    // printf("%d\n",isascii('2'));
    // printf("%d\n",isascii('7'));
    // printf("%d\n",isascii('m'));
    // printf("%d\n",isascii('!'));
    printf("%d\n",ft_isascii('`'));
    printf("%d\n",ft_isascii('"'));
    printf("%d\n",ft_isascii('9'));
    printf("%d\n",ft_isascii('/'));
    return 0;
}