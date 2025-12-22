CC = gcc
CFLAGS = -Wall -Wextra -O2

TARGET = largest
SRC = largest.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
