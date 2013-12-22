# This does not work yet

# Includes
INCS= `pkg-config --libs --static lua5.2`

# Compiling options
CC= gcc
CFLAGS= $(INCS) $(WARN) -fPIC
WARN= -std=c99 -pedantic -Wall -Wextra
CFLAGS= $(INCS)
MAKESO= $(CC) -shared

# Testing
TEST= test.lua

all: test

test: shadowlib.so
	lua $(TEST)

shadowlib.so: $(OBJS)
	$(MAKESO) -o $@ $(OBJS)
