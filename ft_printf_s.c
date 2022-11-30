/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnam <tnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:25:53 by tnam              #+#    #+#             */
/*   Updated: 2022/11/30 13:05:34 by tnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printf_s(va_list vargs_ptr)
{
	size_t	len;
	va_list	temp;
	char	*str;

	va_copy(temp, vargs_ptr);
	if (va_arg(temp, char *) == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
	{
		str = va_arg(vargs_ptr, char *);
		len = ft_strlen(str);
		ft_putstr_fd(str, 1);
		return (len);
	}
}
