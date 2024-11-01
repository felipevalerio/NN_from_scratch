#include "iostream"
#include "vector"
#include "functions.h"


int main() {

	std::vector<double> layer_output;
	std::vector<double> bias = {2.0, 3.0, 0.5};

	std::vector<std::vector<double>> inputs = {
														{1.0, 2.0, 3.0, 2.5},
														{2.0, 5.0, -1.0, 2.0},
														{-1.5, 2.7, 3.3, -0.8}
													};
	std::vector<std::vector<double>> weights = {
													{0.2, 0.8, -0.5, 1.0},
													{0.5, -0.91, 0.26, -0.5},
													{-0.26, -0.27, 0.17, 0.87}
												};


	for (size_t i = 0; i < weights.size(); ++i) {
		double output = 0.0;	
		auto weights_tranposed = transpose(weights);

		for (size_t j = 0; j < inputs.size(); ++j) {
			output += weights_tranposed[i][j] * inputs[j];
		}
		
		output += bias[i];
		layer_output.push_back(output);


	

	return 0;
}


// aqui os dados de input vão chegar em lotes (batches)
// é dessa forma que as redes neurais recebem seus inputs
// treinamento em lotes é mais rápido e também possibilita
// focar mais nos pesos e bias do que os inputs em si.
// tendo uma matriz (array de 2 dimensões) como input e também como os pesos (weights)
// isso vai nos possibilitar uma das operações mais famosas em redes neurais: matmul (multiplicação entre matrizes)

// uma nova operação é a transposição, que basicamente transforma as linhas de uma matriz em colunas, e as colunas em linhas