/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnam <tnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:19:41 by tnam              #+#    #+#             */
/*   Updated: 2022/11/28 19:28:03 by tnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include <stdarg.h>

static void	ft_itoa_x(unsigned long long n, char *str, char format)
{
	int						i;
	unsigned long long		div;
	unsigned long long		mod;

	i = 0;
	while (1)
	{
		div = n / 16;
		mod = n % 16;
		if (format == 'x')
			str[i++] = "0123456789abcdef"[mod];
		else if (format == 'X')
			str[i++] = "0123456789ABCDEF"[mod];
		if (div <= 0)
			break ;
		n = div;
	}
	str[i] = '\0';
}

size_t	ft_printf_x(va_list vargs_ptr, char format)
{
	size_t				print_count;
	int					i;
	unsigned long long	address_dec;
	char				address_str[50];

	address_dec = va_arg(vargs_ptr, unsigned long long);
	ft_itoa_x(address_dec, address_str, format);
	print_count = 0;
	i = (int)ft_strlen(address_str) - 1;
	while (i != -1)
	{
		write(1, &address_str[i], 1);
		i--;
		print_count++;
	}
	return (print_count);
}
