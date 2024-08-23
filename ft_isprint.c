#include "libft.h"
int ft_isprint(int c)
{
    if(c>=32 && c<=126)
        return 1;
    return 0;
}
int main (void)
{
    // printf("%d\n",isprint(' '));
    // printf("%d\n",isprint('7'));
    // printf("%d\n",isprint('m'));
    // printf("%d\n",isprint('!'));
    printf("%d\n",ft_isprint('`'));
    printf("%d\n",ft_isprint('"'));
    printf("%d\n",ft_isprint('9'));
    printf("%d\n",ft_isprint('/'));
    return 0;
}