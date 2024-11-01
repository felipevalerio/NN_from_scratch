#include "iostream"
#include "vector"
#include <iomanip>


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

int main() {

	std::vector<std::vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };


	std::cout << "Matriz Original\n" << std::endl;
	printMatrix(matrix);
	std::cout << "-----------------------------\n" << std::endl;
	std::cout << "Matriz Transpositada\n" << std::endl;
	auto transposed = transpose(matrix);

	printMatrix(transposed);


	return 0;
}