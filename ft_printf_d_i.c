/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d_i.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnam <tnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:34:00 by tnam              #+#    #+#             */
/*   Updated: 2022/11/30 13:04:53 by tnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printf_d_i(va_list vargs_ptr)
{
	size_t		print_count;
	va_list		temp;
	int			num;

	va_copy(temp, vargs_ptr);
	ft_putnbr_fd(va_arg(vargs_ptr, int), 1);
	num = va_arg(temp, int);
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
