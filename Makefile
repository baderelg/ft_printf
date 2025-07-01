# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baelgadi <baelgadi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/25 09:42:52 by baelgadi          #+#    #+#              #
#    Updated: 2025/06/26 11:59:35 by baelgadi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ─────────────────────────────────
#             🎨 COLORS
# ─────────────────────────────────

RESET = \033[0m
RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m
BLUE = \033[34m
MAGENTA = \033[35m
CYAN = \033[36m
GRAY = \033[90m
UNDERLINE = \033[4m

# ─────────────────────────────────
#         🛠️ CONFIGURATION
# ─────────────────────────────────

NAME = libftprintf.a

FT_PRINTF = ft_printf ft_printf_utils ft_printf_hex

HEADER = ft_printf.h

# ─────────────────────────────────
#      🚧 SETUP & DEPENDENCIES
# ─────────────────────────────────

SRCS = $(addsuffix .c, ${FT_PRINTF})

OBJS = ${SRCS:.c=.o}

DEPS = $(OBJS:.o=.d)

CC = cc
CFLAGS = -Wall -Wextra -Werror -I ./ -MMD -MP
AR = ar
ARFLAGS = rcs

# ─────────────────────────────────
#        💽 COMPILATION RULE
# ─────────────────────────────────

.c.o:
	@printf "Compiling $(BLUE)%-25s$(RESET)" $<
	@$(CC) $(CFLAGS) -c $< -o ${<:.c=.o} && printf "✅\n" || printf "❌\n"

# ─────────────────────────────────
#            🎯 TARGETS
# ─────────────────────────────────

all: $(NAME)

$(NAME):	$(OBJS)
	@echo "$(MAGENTA)⏳ Archiving to $(NAME)$(RESET)"
	@$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	@echo "$(GREEN)✅ $(NAME) created$(RESET)"

# ─────────────────────────────────
#            🧹 CLEANING
# ─────────────────────────────────

clean:
	@rm -f $(OBJS) $(OBJS:.o=.d)
	@echo "$(YELLOW)🧹 Objects and Dependencies deleted (clean)$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)❌ $(NAME) removed (fclean)$(RESET)"

re:	fclean all

# ─────────────────────────────────
#             💡 EXTRA
# ─────────────────────────────────

ifeq ($(strip $(ARGS)),)
test:
	@echo
	@echo "$(RED)❌ ARGS variable missing.$(RESET)"
	@echo "$(YELLOW)   $(UNDERLINE)Usage:$(RESET) make test ARGS='format|arg1|arg2...'"
	@echo "$(CYAN)   $(UNDERLINE)Example:$(RESET) make test ARGS='Fufufu %s %d|\"doffy\"|42'"
	@echo
else
# format|arg1|... -> "format", arg1, ...
PRINTF_ARGS := $(shell echo '$(ARGS)' | awk -F'|' '{printf "\"%s\"", $$1; for(i=2; i<=NF; i++) {printf ", %s", $$i}}')

test: $(NAME)
	@echo "  ╔═══════════════════════════════════════╗"
	@echo "  ║         C U S T O M   T E S T         ║"
	@echo "  ╚═══════════════════════════════════════╝\n"
	@{ \
	echo '/* ************************************************************************** */'; \
	echo '/*                                                                            */'; \
	echo '/*                                                        :::      ::::::::   */'; \
	echo '/*   main_test.c                                        :+:      :+:    :+:   */'; \
	echo '/*                                                    +:+ +:+         +:+     */'; \
	echo '/*   By: baelgadi <baelgadi@student.42.fr>          +#+  +:+       +#+        */'; \
	echo '/*                                                +#+#+#+#+#+   +#+           */'; \
	echo '/*   Created: 2025/06/25 13:47:13 by baelgadi          #+#    #+#             */'; \
	echo '/*   Updated: 2025/06/25 15:39:22 by baelgadi         ###   ########.fr       */'; \
	echo '/*                                                                            */'; \
	echo '/* ************************************************************************** */'; \
	echo ''; \
	echo '#include <stdio.h>'; \
	echo '#include "ft_printf.h"'; \
	echo ''; \
	echo 'int	main(void)'; \
	echo '{'; \
	echo '	int	ft_res;'; \
	echo '	int	original_res;'; \
	echo ''; \
	echo '	printf("$(YELLOW)──── Original printf ────$(RESET)\\n");'; \
	echo '	fflush(stdout);'; \
	echo '	original_res = printf($(PRINTF_ARGS));'; \
	echo '	printf("\\n$(YELLOW)Return value: %d\\n", original_res);'; \
	echo '	printf("─────────────────────────\\n\\n$(RESET)");'; \
	echo '	fflush(stdout);'; \
	echo ''; \
	echo '	printf("$(CYAN)──── ft_printf ────$(RESET)\\n");'; \
	echo '	fflush(stdout);'; \
	echo '	ft_res = ft_printf($(PRINTF_ARGS));'; \
	echo '	printf("\\n$(CYAN)Return value: %d\\n", ft_res);'; \
	echo '	printf("───────────────────\\n$(RESET)");'; \
	echo '	fflush(stdout);'; \
	echo ''; \
	echo '	if (original_res == ft_res)'; \
	echo '		printf("\\n$(GREEN)✅ OK!\\n\\n$(RESET)");'; \
	echo '	else'; \
	echo '		printf("\\n$(RED)❌ KO! (printf: %d, ft_printf: %d)\\n\\n$(RESET)", original_res, ft_res);'; \
	echo '	return (0);'; \
	echo '}'; \
	} > main_test.c
	@$(CC) $(CFLAGS) main_test.c $(NAME) -o custom_test
	@./custom_test
endif

purge: fclean
	@rm -f main_test.c custom_test custom_test.d
	@echo "$(YELLOW)🧹 Purged$(RESET)"

# ─────────────────────────────────
#         🌐 HELP & FOOTER
# ─────────────────────────────────

help:
	@echo "$(YELLOW)  ╔═══════════════════════════════════════╗"
	@echo "  ║   A V A I L A B L E   T A R G E T S   ║"
	@echo "  ╚═══════════════════════════════════════╝\n$(RESET)"
	@echo "$(YELLOW)all      $(RESET)– Build $(NAME)"
	@echo "$(YELLOW)clean    $(RESET)– Delete .o & .d files"
	@echo "$(YELLOW)fclean   $(RESET)– Full clean (including $(NAME))"
	@echo "$(YELLOW)re       $(RESET)– fclean + all"
	@echo "$(YELLOW)test     $(RESET)– Run custom ft_printf tester"
	@echo "$(YELLOW)purge    $(RESET)– fclean + delete test and leftover files\n"
	@echo "$(MAGENTA)\033]8;;https://github.com/baderelg/ft_printf\033\\Ft_printf explained by Doflamingo\033]8;;\033\\ $(RESET)\n"

-include $(DEPS)

.PHONY: all clean fclean re test purge
