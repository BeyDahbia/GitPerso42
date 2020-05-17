/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabey <dabey@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 17:01:00 by dabey             #+#    #+#             */
/*   Updated: 2020/03/03 01:32:03 by dabey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_tofind(char c, char *type)
{
	int i;
	i = 0;
	while (type[i])
	{
		if (c == type[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_printf(const char *src, ...)
{
	int i;
	int index;
	char type_printf[8] = {'i', 'd', 'c', 's', 'p', 'x', 'X', 0};
	(void) (*function_tab[7])(va_list *my_list) = {ft_printf_D, ft_printf_D, ft_printf_C,
			 ft_printf_S, ft_printf_P, ft_printf_x, ft_printf_X};

	i = 0;
	index = 0;
	va_list	my_list;
	va_start(my_list, src);
	while (src[i] != 0)
	{
		if (i != 0 && src[i - 1] == '%')
		{
			index = ft_tofind(src[i], type_printf);
			if (index != -1)
				(*function_tab[index])(&my_list);
		}
		else
			if (src[i] != '%')
				write (1, &src[i], 1);
		i++;
	}
}
