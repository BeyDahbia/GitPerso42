#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}


void	ft_putnbr_fd(int n, int fd)
{
	long nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd((nb % 10) + 48, fd);
	}
	if (nb < 10)
	{
		ft_putchar_fd(nb + 48, fd);
	}
}
///////////////////////////////////////////////////////
void ft_print_D(va_list *my_list)
{
	int number;

	number = va_arg(*my_list, int);
	ft_putnbr_fd(number, 1);
}

void ft_printf_C(va_list *my_list)
{
	char c;

	c = va_arg(*my_list, int);
	write (1, &c, 1);
}

void ft_printf_S(va_list *my_list)
{
	char *src;

	src = va_arg(*my_list, char *);
	write (1, src, ft_strlen(src));
}

void ft_printf_P(va_list *my_list)
{
	char c;

	c = va_arg(*my_list, int);
	write (1, &c, 1);
}

void ft_printf_x(va_list *my_list)
{
	char c;

	c = va_arg(*my_list, int);
	write (1, &c, 1);
}


void ft_printf_X(va_list *my_list)
{
	char c;

	c = va_arg(*my_list, int);
	write (1, &c, 1);
}
