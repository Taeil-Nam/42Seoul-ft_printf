/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnam <tnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:25:53 by tnam              #+#    #+#             */
/*   Updated: 2022/11/30 17:59:24 by tnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printf_s(va_list vargs_ptr)
{
	size_t	len;
	char	*str;

	str = va_arg(vargs_ptr, char *);
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
	{
		len = ft_strlen(str);
		ft_putstr_fd(str, 1);
		return (len);
	}
}
