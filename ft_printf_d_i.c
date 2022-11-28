/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnam <tnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:34:00 by tnam              #+#    #+#             */
/*   Updated: 2022/11/28 19:04:59 by tnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include <stdarg.h>

size_t	ft_printf_d_i(va_list vargs_ptr)
{
	size_t		print_count;
	va_list		n;
	int			num;

	va_copy(n, vargs_ptr);
	ft_putnbr_fd(va_arg(vargs_ptr, int), 1);
	num = va_arg(n, int);
	print_count = 0;
	if (num == 0)
		print_count = 1;
	if (num < 0)
	{
		num *= -1;
		print_count++;
	}
	while (num != 0)
	{
		num /= 10;
		print_count++;
	}
	return (print_count);
}
