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
TARGET = build/main

# Target rules
$(TARGET): $(OBJS)
	$(CC) -o $@ $^

# Object file rules
$(BUILDDIR)/%.o: $(SRCDIR)/%.c | $(BUILDDIR)
	$(CC) $(CFLAGS) -c -o $@ $<

$(BUILDDIR):
	mkdir -p $(BUILDDIR)

run:
	./$(TARGET)


# Clean rule
clean:
	rm -f $(BUILDDIR)/*.o $(TARGET)

