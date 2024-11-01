#include "iostream"
#include "vector"


int main() {

	std::vector<double> inputs = {1.0, 2.0, 3.0, 2.5};
	std::vector<std::vector<double>> weights = {{0.2, 0.8, -0.5, 1.0},
												{0.5, -0.91, 0.26, -0.5},
												{-0.26, -0.27, 0.17, 0.87}};
	std::vector<double> bias = {2.0, 3.0, 0.5};
	std::vector<double> layer_output;

	// produto escalar (dot product) é a soma do produto de todos os elementos de um vetor
	// isso é necessário pois é uma das operações com tensores
	// onde os inputs (inputs) são multiplicados com os pesos (weights)
	// para então somar os resultados (produtos).
	// int dot_product = dot_1[0]*dot_2[0] + dot_1[1]*dot_2[1] + dot_1[2]*dot_2[2];

	// com loop for
	for (size_t i = 0; i < weights.size(); ++i) {
		double output = 0.0;	
		for (size_t j = 0; j < inputs.size(); ++j) {
			output += weights[i][j] * inputs[j]; //resultado da multiplicação é somado com +=
			std::cout << "Input: " << inputs[j] << " * " << "Peso: " << weights[i][j] << " = " << output << std::endl;
		}
		
		output += bias[i];
		std::cout << "Bias: " << bias[i] << std::endl;
		std::cout << "Ouput (Soma dos produtos): " << output << std::endl;
		layer_output.push_back(output);
	}

	std::cout << "----------------------" << std::endl;

	for (double output : layer_output) {
		std::cout << output << std::endl;	
	}

	return 0;
}

	// um tensor não é nada mais, na visão de um programador, que um vetor de 1 ou mais dimensões
	// Exemplo de tensor em diferentes dimensões
	// escalar = 0 dimensões
	// vetor = 1 dimensão
	// matriz = 2 dimensões
	// tensor = 3 dimensões ou mais
