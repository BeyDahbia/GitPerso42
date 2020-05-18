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
	void (*function_tab[7])(va_list *) = {ft_print_I, ft_print_D, ft_print_C, ft_print_S, ft_print_P, ft_print_x, ft_print_X};
	char type_print[8] = {'i', 'd', 'c', 's', 'p', 'x', 'X', 0};

	i = 0;
	index = 0;
	va_list	my_list;
	va_start(my_list, src);
	while (src[i] != 0)
	{
		if (i != 0 && src[i - 1] == '%')
		{
			index = ft_tofind(src[i], type_print);
			if (index != -1)
				(*function_tab[index])(&my_list);
		}
		else
			if (src[i] != '%')
				write (1, &src[i], 1);
		i++;
	}
	va_end(my_list);
	return(0);
}

/* test de definition de fo,ction separaer de l'initialisation
	 void (*function_tab[7])(va_list *);
	 (*function_tab[0]) = ft_print_D;
	 (*function_tab[1]) = ft_print_D;
	 (*function_tab[2]) = ft_print_C;
	 (*function_tab[3]) = ft_print_S;
	 (*function_tab[4]) = ft_print_P;
	 (*function_tab[5]) = ft_print_x;
	 (*function_tab[6]) = ft_print_X;
	 */
