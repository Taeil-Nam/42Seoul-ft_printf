/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnam <tnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 20:47:51 by tnam              #+#    #+#             */
/*   Updated: 2022/11/28 21:01:56 by tnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "./libft/libft.h"

int		ft_printf(const char *a, ...);
size_t	ft_printf_c(va_list vargs_ptr);
size_t	ft_printf_s(va_list vargs_ptr);
size_t	ft_printf_p(va_list vargs_ptr);
size_t	ft_printf_d_i(va_list vargs_ptr);
size_t	ft_printf_u(va_list vargs_ptr);
size_t	ft_printf_x(va_list vargs_ptr, char format);
size_t	ft_printf_percent(void);

#endif