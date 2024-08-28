#ifndef LIBFT_H
# define LIBFT_H

#include <ctype.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_memset(void *b, int c, size_t len);
int ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

#endif