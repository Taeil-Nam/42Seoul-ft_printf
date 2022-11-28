# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnam <tnam@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/24 15:14:38 by tnam              #+#    #+#              #
#    Updated: 2022/11/28 20:26:55 by tnam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libftprintf.a

CC				= cc
CFLAG			= -Wall -Wextra -Werror

RM				= rm -f

AR				= ar
ARFLAG			= crs

INCLUDES		= ./
LIBFT			= ./libft/libft.a

SRCS_M			= ft_printf.c				\
				  ft_printf_c.c				\
				  ft_printf_d_i.c			\
				  ft_printf_percent.c		\
				  ft_printf_s.c				\
				  ft_printf_u.c				\
				  ft_printf_x.c				\
				  ft_printf.c				\

OBJS_M			= $(SRCS_M:.c=.o)

all: $(NAME)

$(NAME): $(OBJS_M)
	$(MAKE) all -C ./libft
	cp libft.libft.a .
	$(AR) $(ARFLAG) $@ $^ $(LIBFT)

%.o : %.c
	$(CC) $(CFLAG) -c $< -o $@

clean :
	$(MAKE) -C libft clean
	$(RM) $(OBJS_M)

fclean : clean
	$(MAKE) -C libft cflean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re bonus