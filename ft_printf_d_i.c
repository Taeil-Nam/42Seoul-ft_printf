/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d_i.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnam <tnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:34:00 by tnam              #+#    #+#             */
/*   Updated: 2022/11/30 17:59:22 by tnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printf_d_i(va_list vargs_ptr)
{
	size_t		print_count;
	int			num;
	long long	num_l;

	num = va_arg(vargs_ptr, int);
	ft_putnbr_fd(num, 1);
	num_l = num;
	print_count = 0;
	if (num_l == 0)
		print_count = 1;
	if (num_l < 0)
	{
		num_l *= -1;
		print_count++;
	}
	while (num_l != 0)
	{
		num_l /= 10;
		print_count++;
	}
	return (print_count);
}
