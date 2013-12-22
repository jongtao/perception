# Includes
INCS= -I/usr/include/lua5.2 -llua5.2

# Compiling options
CC= gcc
CFLAGS= $(INCS) $(WARN) -O2 -fPIC
WARN= -std=c99 -pedantic -Wall -Wextra
MAKESO= $(CC) -shared

# Files
TEST= test.lua
OBJS= shadowlib.o shadow.o
LIB= shadowlib.so

# Rules
all: test

test: $(LIB)
	lua $(TEST)

o: $(OBJS)

so: $(LIB)

$(LIB): $(OBJS)
	$(MAKESO) -o $@ $(OBJS)

.PHONY: clean

clean: 
	rm -f $(OBJS) $(LIB) core core.*

