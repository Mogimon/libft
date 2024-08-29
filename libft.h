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
int ft_tolower(int  c);
int ft_toupper(int c);

void * ft_memmove(void *dst, const void *src, size_t len);
void   ft_bzero(void *s, size_t n);
char * ft_strchr(const char *s, int c);
char * strrchr(const char *s, int c);
size_t ft_strlen(const char *s);
size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);



#endif