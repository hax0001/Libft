Library		= libft

files 	   = ft_isalpha/
			 ft_isdigit/
			 ft_isalnum/
			 ft_isascii/
			 ft_isprint/
			 ft_toupper/
			 ft_tolower/
			 ft_atoi/
			 ft_strncmp/
			 ft_memcmp/
			 *ft_strdup/
			 *ft_strchr/
			 *ft_strrchr/
			 *ft_strnstr/
			 *ft_substr/
			 *ft_strjoin/
			 *ft_strtrim/
			 *ft_memset/
			 ft_bzero/
			 *ft_memcpy/
			 *ft_memmove/
			 *ft_memchr/
			 *ft_calloc/
			 ft_strlen/
			 ft_strlcpy/
			 ft_strlcat
			 **ft_split/
			 *ft_itoa/
			 *ft_strmapi/
			 ft_striteri/
			 ft_putchar_fd/
			 ft_putstr_fd
			 ft_putendl_fd/
			 ft_putnbr_fd/

Compiler	= gcc

CmpFlags	= -Wall -Wextra -Werror

OUTN	= $(Library).a

CFILES	= $(files:%=%.c)

OFILES	= $(files:%=%.o)

NAME	= $(OUTN)

$(NAME):
	$(Compiler) $(CmpFlags) -c $(CFILES) -I./
	ar -rc $(OUTN) $(OFILES)

all: $(NAME)

clean:
	rm -f $(NAME)
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re