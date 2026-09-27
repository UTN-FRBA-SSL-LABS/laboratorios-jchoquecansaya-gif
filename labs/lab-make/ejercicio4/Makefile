# Nombre del ejecutable final
PROGRAMA := programa

# Compilador y flags
CC     := gcc
CFLAGS := -Wall

# Archivos fuente
SRCS := main.c operaciones.c

# Archivos objeto
OBJS := $(SRCS:.c=.o)

# Regla principal
all: $(PROGRAMA)

# Regla para linkear los objetos y generar el ejecutable
$(PROGRAMA): $(OBJS)
	$(CC) $^ -o $(PROGRAMA)

# Regla de patrón para compilar .c en .o
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regla para limpiar archivos generados
clean:
	rm -f $(PROGRAMA) $(OBJS)

.PHONY: all clean