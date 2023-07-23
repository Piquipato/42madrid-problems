# Nombre del ejecutable que se generará
TARGET = rush-02

# Compilador a utilizar
CC = cc

# Opciones de compilación
CFLAGS = -Wall -Wextra -Werror

# Lista de archivos fuente
SRCS = main.c listmod.c listutils.c printlib.c reads.c utils.c

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

fclean:
	rm -f $(TARGET)

re: fclean $(TARGET)

.PHONY: all clean fclean re
