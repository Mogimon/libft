#include "libft.h"
int ft_isdigit(int c)
{
    if(c>=48 && c<=57) //0>>9
        return 1;
    return 0;
}
int main (void)
{
    // printf("%d\n",isdigit('2'));
    // printf("%d\n",isdigit('7'));
    // printf("%d\n",isdigit('w'));
    // printf("%d\n",isdigit('!'));
    printf("%d\n",ft_isdigit('2'));
    printf("%d\n",ft_isdigit('0'));
    printf("%d\n",ft_isdigit('m'));
    printf("%d\n",ft_isdigit('/'));
    return 0;
}