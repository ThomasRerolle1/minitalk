# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/03 11:41:55 by trerolle          #+#    #+#              #
#    Updated: 2021/12/03 13:48:52 by trerolle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRCS = ft_isdigit.c ft_memset.c ft_strjoin.c ft_strtrim.c ft_isprint.c\
ft_putchar_fd.c ft_strlcat.c ft_substr.c ft_atoi.c ft_itoa.c ft_putendl_fd.c\
ft_strlcpy.c ft_tolower.c ft_bzero.c ft_memcpy.c ft_putnbr_fd.c ft_strlen.c\
ft_toupper.c ft_calloc.c ft_memchr.c ft_putstr_fd.c ft_strmapi.c ft_isalnum.c\
ft_memcmp.c ft_split.c ft_strncmp.c ft_isalpha.c ft_memcpy.c ft_strchr.c\
ft_strnstr.c ft_isascii.c ft_memmove.c ft_strdup.c ft_strrchr.c ft_striteri.c

BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c\
		ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c\

GREEN = \033[0;32m

OBJS = ${SRCS:.c=.o}

OBJSBONUS = ${BONUS:.c=.o}

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		@${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		@ar rcs ${NAME} ${OBJS}
		@echo "$(GREEN)$(NAME) succesfully created$(RESET)"

bonus:	${OBJS} ${OBJSBONUS}
		@ar rcs ${NAME} ${OBJS} ${OBJSBONUS}

all:	${NAME}

clean:
		@${RM} ${OBJS} ${OBJSBONUS}
		@echo "$(GREEN) *.o succesfully deleted$(RESET)"

fclean:	clean
		@${RM} ${NAME}
		@echo "$(GREEN) ALL is succesfully deleted$(RESET)"

re:		fclean all


.PHONY: bonus all clean fclean re
