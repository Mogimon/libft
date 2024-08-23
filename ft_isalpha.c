#include "libft.h"
int ft_isalpha(int c)
{
    if(c>65 && c<90) //A>>Z
        return 1;
    else if(c>97 && c<122)
        return 1;
    return 0;
}
int main (void)
{
    // printf("%d\n",isalpha('C'));
    // printf("%d\n",isalpha(103));
    // printf("%d\n",isalpha('w'));
    // printf("%d\n",isalpha('!'));
    printf("%d\n",ft_isalpha('C'));
    printf("%d\n",ft_isalpha(103));
    printf("%d\n",ft_isalpha('w'));
    printf("%d\n",ft_isalpha('!'));
    return 0;
}