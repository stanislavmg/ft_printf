#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "./libft/libft.h"

char	ft_printu(size_t num, size_t base, char cap);
char	ft_printx(size_t num, char ch);
char	multiplexer(char ch, va_list *args);
int	    ft_printf(const char *s, ...);

#endif