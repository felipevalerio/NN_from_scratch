#include "iostream"
#include "vector"
// #include <unsupported/Eigen/CXX11/Tensor>

using namespace std;



int main() {

	// inputs são os valores de entrada para o nosso modelo
	// weights (pesos) são valores associados aos inputs que no decorrer do treinamento
	// do modelo, esses mesmos valores serão alterados (assim como os bias)
	std::vector<double> layer_output;
	std::vector<float> biases = {2.0, 5.0, 2.4};
	std::vector<float> inputs = {1.0, 2.0, 3.0};
	std::vector<std::vector<float>> weights = {{0.5, 9.1, 1.5},
											   {0.2, 0.8, -0.5},
											   {7.8, 4.1, 6.6}};
	

	// cada input é somado com seu weights associado e depois
	// somado com o valor do bias
	for (auto i = 0; i < weights.size(); ++i) {
			double neuron_output = 0.0;

			for (auto j = 0; j < inputs.size(); ++j) {
				neuron_output += inputs[j] * weights[i][j]; // multiplica o input pelo weight associado
			}

			neuron_output += biases[i]; // soma com o bias
			layer_output.push_back(neuron_output); // adiciona o resultado no vetor
		}


	std::cout << "Layer outputs: ";
	for(auto i = 0; i < size(layer_output); i++) {
		std::cout << layer_output[i] << " ";
	}

	return 0;
}