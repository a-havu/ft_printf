/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:19:32 by ahavu             #+#    #+#             */
/*   Updated: 2024/11/28 15:37:54 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

static int	print_arg(va_list args, char x)
{
	if (x == 'c')
		return (print_char(va_arg(args, int)));
	if (x == 's')
		return (print_str(va_arg(args, char *)));
	if (x == 'p')
		return (print_ptr(va_arg(args, uintptr_t)));
	if (x == 'd' || x == 'i')
		return (print_nbr(va_arg(args, int)));
	if (x == 'u')
		return (print_uint(va_arg(args, unsigned int)));
	if (x == 'x' || x == 'X')
		return (print_hex((va_arg(args, unsigned int)), x));
	if (x == '%')
		return (print_char('%'));
	return (0);
}

int	ft_printf(const char *initial_str, ...)
{
	int		i;
	int		len;
	va_list	args;

	if (!initial_str)
		return (-1);
	va_start (args, initial_str);
	i = 0;
	len = 0;
	while (initial_str[i])
	{
		if (initial_str[i] == '%' && (initial_str[i + 1]
		&& ft_strchr("cspdiuxX%", initial_str[i + 1])))
		{
			i++;
			len += print_arg(args, initial_str[i]);
			i++;
		}
		else
		{
			print_char(initial_str[i]);
			len++;
			i++;
		}
	}
	va_end(args);
	return (len);
}
