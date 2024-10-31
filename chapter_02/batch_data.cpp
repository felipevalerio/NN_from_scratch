#include "iostream"
#include "vector"


int main() {

	std::vector<double> layer_output;
	std::vector<double> bias = {2.0, 3.0, 0.5};
	std::vector<double> inputs = {1.0, 2.0, 3.0, 2.5};
	std::vector<std::vector<double>> weights = {{0.2, 0.8, -0.5, 1.0},
												{0.5, -0.91, 0.26, -0.5},
												{-0.26, -0.27, 0.17, 0.87}};



	return 0;
}


// aqui os dados de input vão chegar em lotes (batches)
// é dessa forma que as redes neurais recebem seus inputs