# Definicion de compoñentes
CC = g++
CFLAGS = -std=c++11 -Wall

# Nome do executable e ruta
TARGET = ./bin/executable

# Arquivos fontes e ruta
SRC = ./src/main.cpp ./src/funcions.cpp	# Poñemos unicamente o main.cpp. Se houbera mais arquivos, engadirianse aqui
OBJ = $(SRC:.cpp=.o)

# Regra principal
$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

# Regra para compilar os arquivos .cpp a .o
%.o: %.cpp ./src/funcions.h
	$(CC) $(CFLAGS) -c $< -o $@

# Limpeza dos arquivos xerados
clean:
	rm -f $(OBJ) $(TARGET)*
