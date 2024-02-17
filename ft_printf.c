#include "ft_printf.h"

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
			count += multiplexer(s[i], &args);
			s += i + 1;
			i = -1;
		}
		i++;
	}
	va_end(args);
	return (count);
}


/*int	main(void)
{
	unsigned int a;
	
	a = 123456789;
	printf("%p %x %X %u \n", &a, a, a, a);
	ft_printf("%p %x %X %u", &a, a, a, a);
	return (0);
}*/
