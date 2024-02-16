#include <stdarg.h>
#include <unistd.h>
#include "libft.h"
# define SIZE 9

char	multiplexer(char ch, va_list *args)
{
	if (ch == '%')
		ft_putchar_fd('%', 1);
	else if (ch == 'c')
		ft_putchar_fd(va_arg(*args, int), 1);
	else if (ch == 's')
		ft_putstr_fd(va_arg(*args, char *), 1);
	else if (ch == 'i')
		ft_putnbr_fd(va_arg(*args, int), 1);
	else if (ch == 'd')

	else if (ch == 'u')

	else if (ch == 'p')

	else if (ch == 'x')

	else if (ch == 'X')
	
	return 0;
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, s);
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == '%')
		{
			write(1, s, i++);
			if (multiplexer(s[i], &args))
				count++;
			s += i + 1;
			i = -1;
		}
		i++;
	}
	va_end(args);
	return (count);
}


int	main(void)
{
	int	jump_table[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	ft_printf("0000   %s %c %% %i", "lol", 'X', 102);
	return (0);
}
