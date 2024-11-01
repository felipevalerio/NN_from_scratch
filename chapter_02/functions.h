#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <string>
#include <vector>


template<typename T>
void printMatrix(const std::vector<std::vector<T>>& matrix) {

    for (const auto& row : matrix) {
        for (const auto& val : row) {
            std::cout << std::setw(4) << val;
        }
        std::cout << std::endl;
    }
}


template<typename T>
std::vector<std::vector<T>> transpose(const std::vector<std::vector<T>>& matrix) {
    
    size_t rows = matrix.size();
    size_t cols = matrix[0].size();
    
    // Cria nova matriz com dimensões invertidas
    std::vector<std::vector<T>> matrix_transposed(cols, std::vector<T>(rows));
    
    // Realiza a transposição
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            matrix_transposed[j][i] = matrix[i][j];
        }
    }
    
    return matrix_transposed;
}

#endif




// Os templates são fundamentais em C++ moderno porque:

// Permitem código genérico sem sacrificar performance
// Fornecem abstração sem custo em runtime
// São a base de muitas características avançadas da linguagem
// Permitem bibliotecas altamente reutilizáveis e eficientes
// São essenciais para a STL (Standard Template Library)


// / Uma única função que funciona com qualquer tipo numérico
// template<typename T>
// T max(T a, T b) {
//     return (a > b) ? a : b;
// }

// // Pode ser usado com diferentes tipos
// int i = max(10, 20);         // com int
// double d = max(10.5, 20.7);  // com double
// float f = max(10.5f, 20.7f); // com float