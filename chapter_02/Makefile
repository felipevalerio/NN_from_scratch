CXX = clang++
CXXFLAGS = -std=c++14 -Wall -Wextra -Werror

SRC_FILES = batch_data.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)
EXECUTABLE = batch_data


# Regra padrão para construir o projeto
all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) -o $(EXECUTABLE).exe $(OBJ_FILES)

# Regra para compilar arquivos .cpp em .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regra para limpar os arquivos gerados
clean:
	$(RM) $(OBJ_FILES) $(EXECUTABLE)

# Força a execução do "clean"
.PHONY: all clean
