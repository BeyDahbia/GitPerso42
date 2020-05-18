/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabey <dabey@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 17:05:49 by dabey             #+#    #+#             */
/*   Updated: 2020/03/12 19:59:10 by dabey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
//#include<libft.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdarg.h>

struct s_printf
{
	char	flags;
	int		type;
}S_printf;

size_t	ft_strlen(const char *str);
int		ft_printf(const char *src, ...);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_print_I(va_list *my_list);
void	ft_print_D(va_list *my_list);
void	ft_print_C(va_list *my_list);
void	ft_print_S(va_list *my_list);
void	ft_print_P(va_list *my_list);
void	ft_print_x(va_list *my_list);
void	ft_print_X(va_list *my_list);

#endif
