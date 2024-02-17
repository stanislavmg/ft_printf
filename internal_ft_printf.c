#include "ft_printf.h"

char	ft_printu(size_t num, size_t base, char cap)
{
	if (!num)
		return (1);
	ft_printu(num / base, base, cap);
	if (num % base < 10)
		ft_putchar_fd(num % base + '0', 1);
	else
		ft_putchar_fd(num % base + cap - 10, 1);
	return (1);
}

char	ft_printx(size_t num, char ch)
{
	if (ch == 'X')
		ft_printu(num, 16, 'A');
	else if (ch == 'x')
		ft_printu(num, 16, 'a');
	else
	{
		write(1, "0x", 2);
		ft_printu(num, 16, 'a');
	}
	return (1);
}

char	multiplexer(char ch, va_list *args)
{
	if (ch == '%')
		ft_putchar_fd('%', 1);
	else if (ch == 'c')
		ft_putchar_fd(va_arg(*args, int), 1);
	else if (ch == 's')
		ft_putstr_fd(va_arg(*args, char *), 1);
	else if (ch == 'i' || ch == 'd')
		ft_putnbr_fd(va_arg(*args, int), 1);
	else if (ch == 'u')
		ft_printu(va_arg(*args, unsigned int), 10, 0);
	else if (ch == 'p')
		ft_printx(va_arg(*args, unsigned long long), ch);
	else if (ch == 'x' || ch == 'X')
		ft_printx(va_arg(*args, unsigned int), ch);
	return 0;
}