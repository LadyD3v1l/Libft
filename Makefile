# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jobraga <jobraga@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/23 18:16:28 by jobraga           #+#    #+#              #
#    Updated: 2025/04/23 18:16:28 by jobraga          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
OBJ_DIR = Obj

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isascii.c ft_isalpha.c \
		ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strjoin.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
		ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c ft_strtrim.c \
		ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strnstr.c

LIST = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
		ft_lstiter.c ft_lstlast.c ft_lstnew.c ft_lstsize.c ft_lstmap.c

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))
O_LIST = $(addprefix $(OBJ_DIR)/, $(LIST:.c=.o))

all: $(NAME)

$(NAME): $(OBJ) 
		@echo "CRIOU ISSO $(NAME)"
		@ar rcs $@ $^

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
		$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
		@mkdir -p $(OBJ_DIR)

bonus: .bonus 

.bonus: $(O_LIST) $(NAME)
		@ar rcs $(NAME) $(O_LIST)
		@echo "TESTE $(NAME)"
		@touch .bonus

clean:
		@echo "Remooooving $(OBJ) $(O_LIST)"
		@rm -rf $(OBJ_DIR)

fclean: clean
		@echo "Tira Tira ISSO $(NAME)"
		@rm -f $(NAME) .bonus

re: fclean all

.PHONY: re fclean clean all bonus
