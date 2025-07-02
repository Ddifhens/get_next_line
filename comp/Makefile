CC=cc
CFLAGS= -Wall -Werror -Wextra -D BUFFER_SIZE=20
NAME=getnextline.a
DIR_GUARD=@mkdir -p $(@D)

C_FILES= get_next_line get_next_line_utils 

SRC_DIR=../
INC_DIR=../
NPATH:=$(shell pwd)/temp/
OBJ_DIR=$(NPATH)

SRCS= $(addprefix $(SRC_DIR), $(addsuffix .c, $(C_FILES)))
OBJS= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(C_FILES)))

all : $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	@echo "=== Library compiled ==="

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	$(DIR_GUARD)
	$(CC) -g $(CFLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	rm -f $(OBJS)
	@echo "=== Cleaned Objects ==="

fclean:clean
	rm -f $(NAME)
	@echo "=== Cleaned Library ==="

#####===========================) DEBUG: run this rule if makefile not correctly shell path	

debug-env:
	@echo "=== MAKE ENVIRONMENT ==="
	@echo "PATH: $(PATH)"
	@echo "SHELL: $(SHELL)"
	@echo "CC: $(shell which cc)"
	@echo "AR: $(shell which ar)"
	@echo "RM: $(shell which rm)"
