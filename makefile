# Compiler
CC = gcc

# Directories
SRCDIR = src
INCDIR = include
BUILDDIR = build

# Flags
CFLAGS = -I$(INCDIR)

# Source files
SRCS = $(wildcard $(SRCDIR)/*.c)

# Object files
OBJS = $(patsubst $(SRCDIR)/%.c,$(BUILDDIR)/%.o,$(SRCS))

# Target
TARGET = main

# Target rules
$(TARGET): $(OBJS)
	$(CC) -o $@ $^

# Object file rules
$(BUILDDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

# Clean rule
clean:
	rm -f $(BUILDDIR)/*.o $(TARGET)

