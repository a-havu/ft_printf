/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:44:04 by ahavu             #+#    #+#             */
/*   Updated: 2024/11/28 14:29:18 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_uint(unsigned int n)
{
	char	c;
	int		i;

	i = 0;
	if (n >= 10)
		i += print_uint(n / 10);
	c = (n % 10) + 48;
	write (1, &c, 1);
	i++;
	return (i);
}
