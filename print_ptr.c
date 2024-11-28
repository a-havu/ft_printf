/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:47:00 by ahavu             #+#    #+#             */
/*   Updated: 2024/11/28 14:29:30 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_ptr(uintptr_t ptr)
{
	int	len;

	if (!ptr)
		return (print_str("(nil)"));
	print_str("0x");
	len = 2;
	len += print_hex(ptr, 'x');
	return (len);
}
