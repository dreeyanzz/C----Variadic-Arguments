# 1. Compiler and Flags
CC = gcc
CFLAGS = -Wall -g -Iheaders

# 2. Source Definitions
SRCS = main.c $(wildcard source-codes/*.c)

# 3. Output Name
TARGET = main

# 4. The Build Rule
all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $@ $^

# 5. Cleanup
clean:
	rm -f $(TARGET)

# 6. Run (The new part)
run: $(TARGET)
	./$(TARGET)

# 7. Phony Targets (Best Practice)
# Tells Make that 'clean' and 'run' are not actual files
.PHONY: clean run all