/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:33:43 by ahavu             #+#    #+#             */
/*   Updated: 2024/11/28 15:46:35 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	handle_edgecase(int n)
{
	int	res;

	res = 0;
	if (n == -2147483648)
	{
		print_str("-2147483648");
		res = 11;
	}
	else if (n == 0)
	{
		print_char('0');
		res = 1;
	}
	return (res);
}

int	print_nbr(int n)
{
	char	c;
	int		i;

	i = 0;
	if (n == -2147483648 || n == 0)
		return (handle_edgecase(n));
	if (n < 0)
	{
		n = -n;
		c = '-';
		print_char(c);
		i++;
	}
	if (n >= 10)
		i += print_nbr(n / 10);
	c = (n % 10) + 48;
	print_char(c);
	i++;
	return (i);
}
