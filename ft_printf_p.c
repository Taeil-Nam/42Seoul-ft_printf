/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnam <tnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:34:46 by tnam              #+#    #+#             */
/*   Updated: 2022/11/28 20:51:00 by tnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_itoa_hex(unsigned long long n, char *str)
{
	int						i;
	unsigned long long		div;
	unsigned long long		mod;

	i = 0;
	while (1)
	{
		div = n / 16;
		mod = n % 16;
		str[i++] = "0123456789abcdef"[mod];
		if (div <= 0)
			break ;
		n = div;
	}
	str[i] = '\0';
}

size_t	ft_printf_p(va_list vargs_ptr)
{
	size_t				print_count;
	int					i;
	unsigned long long	address_dec;
	char				address_str[50];

	address_dec = va_arg(vargs_ptr, unsigned long long);
	ft_itoa_hex(address_dec, address_str);
	print_count = 2;
	i = (int)ft_strlen(address_str) - 1;
	write(1, "0x", 2);
	while (i != -1)
	{
		write(1, &address_str[i], 1);
		i--;
		print_count++;
	}
	return (print_count);
}
