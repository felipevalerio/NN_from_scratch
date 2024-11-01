#include "vector"
#include "iostream"
#include "functions.h"
#include <iomanip>


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