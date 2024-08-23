#include "libft.h"
int ft_isalnum(int c)
{
    if(c>=48 && c<=57) //0>>9
        return 1;
    else if (c>=65 && c<=90)
        return 1;
    else if (c>=97 && c<=122)
        return 1;
    return 0;
}
int main (void)
{
    printf("%d\n",isalnum('2'));
    printf("%d\n",isalnum('7'));
    printf("%d\n",isalnum('m'));
    printf("%d\n",isalnum('!'));
    // printf("%d\n",ft_isalnum('9'));
    // printf("%d\n",ft_isalnum('h'));
    // printf("%d\n",ft_isalnum('g'));
    // printf("%d\n",ft_isalnum('/'));
    return 0;
}