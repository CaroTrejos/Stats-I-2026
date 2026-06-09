# Makefile para proyecto con estructura include/ lib/ src/
# Demuestra el uso de -I y -L
# IE-0117 - I-2026

CC      = gcc
CFLAGS  = -Wall -Wextra -Iinclude
LDFLAGS = -Llib -lstats

TARGET = programa

.PHONY: all clean

all: lib/libstats.a $(TARGET)

# Compilar stats.o dentro de src/
src/stats.o: src/stats.c include/stats.h
	$(CC) $(CFLAGS) -c src/stats.c -o src/stats.o

# Crear la biblioteca en lib/
lib/libstats.a: src/stats.o
	ar rcs lib/libstats.a src/stats.o
	@echo "[OK] lib/libstats.a creada"

# Compilar y enlazar el ejecutable
# -Iinclude: busca stats.h en include/
# -Llib:     busca libstats.a en lib/
$(TARGET): src/main.c lib/libstats.a
	$(CC) $(CFLAGS) src/main.c $(LDFLAGS) -o $(TARGET)
	@echo "[OK] $(TARGET) creado"

clean:
	rm -f src/*.o lib/*.a lib/*.so $(TARGET)
