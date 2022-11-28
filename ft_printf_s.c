/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnam <tnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:25:53 by tnam              #+#    #+#             */
/*   Updated: 2022/11/28 20:13:48 by tnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include <stdarg.h>

size_t	ft_printf_s(va_list vargs_ptr)
{
	size_t	len;
	va_list	str;

	va_copy(str, vargs_ptr);
	len = ft_strlen(va_arg(str, char *));
	ft_putstr_fd(va_arg(vargs_ptr, char *), 1);
	return (len);
}
