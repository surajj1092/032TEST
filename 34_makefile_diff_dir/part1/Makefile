##############
####Suraj####
#INCLUDE = $(wildcard $(INC)/*.h)
##############
TARGET = main
SRC = src
INC = inc 
BIN = bin
RED =\33[1;31m
GREEN=\33[1;32m
BLUE=\33[1;34m
NC =\33[1;0m

SOURCE  = $(wildcard $(SRC)/*.c)
OBJECT  = $(patsubst %,$(BIN)/%, $(notdir $(SOURCE:.c=.o)))


CC = gcc
CFLAGS = -Wall -std=gnu99 -I $(INC)

$(BIN)/$(TARGET) : $(OBJECT)
		@echo "$(RED)Linking....$(NC)"
		@echo "$@" 
		@echo "$^" 
		$(CC) -o $@ $^
		@echo "$(BLUE)Linking finished!$(NC)" 
$(BIN)/%.o : $(SRC)/%.c
		@echo "$(GREEN)Compiling.....$(NC)" 
		@echo "$@" 
		@echo "$<" 
		$(CC) $(CFLAGS) -c $<   -o $@ # gcc -Wall -std=gnu99 -I inc  -c src/a.c   -o bin/a.o
		@echo "$(GREEN)Compiled$(NC)" 
		
	

all : help run clean
.PHONY : all

run : $(BIN)/$(TARGET)
	 $(BIN)/$(TARGET)
	 
clean:	
	rm -f $(BIN)/$(TARGET) $(OBJECT)
help:
	@echo "Source:$(SOURCE)"
	@echo "Source:$(OBJECT)"
	

