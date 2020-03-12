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

#include<libft.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdarg.h>
#include <stdarg.h>

struct s_printf
{
	char	flags;
	int		type;
}S_printf;

