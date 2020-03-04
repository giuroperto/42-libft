# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: goka-rop <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/11 11:28:51 by goka-rop          #+#    #+#              #
#    Updated: 2020/03/03 16:08:56 by goka-rop         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = libft.h
NAME = libft.a
SRC	= ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c \
	  ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
	  ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c \
	  ft_strlcpy.c ft_strlen.c ft_strncmp.c \
	  ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_calloc.c ft_strdup.c \
	  ft_substr.c ft_strjoin.c ft_strtrim.c ft_putnbr_fd.c ft_putchar_fd.c \
	  ft_putstr_fd.c ft_putendl_fd.c ft_itoa.c ft_strmapi.c ft_split.c
BNS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJS=$(SRC:.c=.o)
OBJS_BONUS=$(BNS:.c=.o)
all:	$(NAME)
$(NAME):
	@gcc -Wall -Wextra -Werror -I $(HEADER) -c $(SRC)
	@ar rcs $(NAME) $(OBJS)
clean:
	@rm -f $(OBJS)
	@rm -f $(OBJS_BONUS)
fclean:	clean
	@rm -f $(NAME)
re: fclean all
bonus:
	@gcc -Wall -Wextra -Werror -I $(HEADER) -c $(BNS)
	@ar rcs $(NAME) $(OBJS_BONUS)
norm:
	Norminette -R CheckForbiddenSourceHeader
