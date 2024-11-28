/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:30:59 by ahavu             #+#    #+#             */
/*   Updated: 2024/11/28 14:29:24 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_hex(uintptr_t unb, char c)
{
	int	len;

	len = 0;
	if (unb == 0)
		return (print_char('0'));
	if (unb >= 16)
		len += print_hex(unb / 16, c);
	if (unb % 16 <= 9)
		print_char(unb % 16 + '0');
	else
	{
		if (c == 'x')
			print_char((unb % 16) - 10 + 'a');
		else if (c == 'X')
			print_char((unb % 16) - 10 + 'A');
	}
	len++;
	return (len);
}
