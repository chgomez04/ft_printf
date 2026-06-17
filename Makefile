# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/06 09:23:42 by chgomez           #+#    #+#              #
#    Updated: 2025/07/06 18:21:15 by chgomez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I. -Ilibft -Ibonus

NAME = libftprintf.a

SRCS = convert_c.c \
		convert_s.c \
		convert_p.c \
		convert_di.c \
		convert_u.c \
		convert_x.c \
		convert_percent.c \
		dispatch_converter.c \
		ft_itoa_base.c \
		ft_numlen_base.c \
		ft_pad_char.c \
		ft_printf.c \
		ft_putchar_count.c \
		ft_putstr_count.c \
		handle_precision.c \
		handle_width.c \
		parse_format.c \

BONUS_DIR = bonus
BONUS_SRCS = \
	$(BONUS_DIR)/convert_c_bonus.c \
	$(BONUS_DIR)/convert_s_bonus.c \
	$(BONUS_DIR)/convert_p_bonus.c \
	$(BONUS_DIR)/convert_di_bonus.c \
	$(BONUS_DIR)/convert_u_bonus.c \
	$(BONUS_DIR)/convert_x_bonus.c \
	$(BONUS_DIR)/convert_percent_bonus.c \
	$(BONUS_DIR)/dispatch_converter_bonus.c \
	$(BONUS_DIR)/ft_itoa_base_bonus.c \
	$(BONUS_DIR)/ft_numlen_base_bonus.c \
	$(BONUS_DIR)/ft_pad_char_bonus.c \
	$(BONUS_DIR)/ft_printf_bonus.c \
	$(BONUS_DIR)/ft_putchar_count_bonus.c \
	$(BONUS_DIR)/ft_putstr_count_bonus.c \
	$(BONUS_DIR)/handle_precision_bonus.c \
	$(BONUS_DIR)/handle_width_bonus.c \
	$(BONUS_DIR)/parse_format_bonus.c \
	
OBJS = $(SRCS:%.c=objs/%.o)
BONUS_OBJS = $(BONUS_SRCS:bonus/%.c=bonus_objs/%.o)

LIBFT_DIR = libft
LIBFT_A = $(LIBFT_DIR)/libft.a

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT_DIR)
	mkdir -p tmp_obj
	cp $(LIBFT_A) tmp_obj/
	cd tmp_obj && ar x libft.a
	ar rc $(NAME) $(OBJS) tmp_obj/*.o
	rm -rf tmp_obj
	@echo "$(NAME) built successfully!"

bonus: $(BONUS_OBJS) | $(NAME)
	@$(MAKE) -C $(LIBFT_DIR)
	@mkdir -p tmp_obj
	@cp $(LIBFT_A) tmp_obj/
	@cd tmp_obj && ar x libft.a
	@ar rc $(NAME) $(OBJS) $(BONUS_OBJS) tmp_obj/*.o
	@rm -rf tmp_obj
	@echo "$(NAME) built (with bonus) successfully!"

objs/%.o: %.c ft_printf.h Makefile libft/libft.h libft/Makefile
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

bonus_objs/%.o: bonus/%.c bonus/ft_printf_bonus.h Makefile libft/libft.h libft/Makefile
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@rm -rf objs bonus_objs
	@$(MAKE) clean -C $(LIBFT_DIR)
	@echo "Object files removed!"

fclean: clean
	@rm -f $(NAME)
	@$(MAKE) fclean -C $(LIBFT_DIR)
	@echo "All built files cleaned!"

re: fclean all

.PHONY: all bonus clean fclean re

