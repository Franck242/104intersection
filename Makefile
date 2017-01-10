##
## Makefile for emacs in /home/Johanne-Franck/104intersection
## 
## Made by NGBOKOLI Franck NFJ
## Login   <Johanne-Franck@epitech.net>
## 
## Started on  Wed Dec 21 13:54:20 2016 NGBOKOLI Franck NFJ
## Last update Sat Dec 24 18:54:57 2016 NGBOKOLI Franck NFJ
##

CC	= 	g++ -g3

RM	= 	rm -rf

CFLAGS	+= -Wextra

NAME	= 	104intersection

SRCS	=	main.cpp\
		my_str_isnum.cpp\
		my_strlen.cpp\
		104intersection.cpp

OBJS	= $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
