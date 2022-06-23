#include <cmath>

double cubeRoot(double num) {
	return pow(num, 1.0 / 3);
}

double cubeRootIteration(double num) {
	double x = num;
	for (int i = 0; i<10; i++ )
		x = (num / (x * x) + 2 * x) / 3;
	/*double num2 = (num / (num1 * num1) + 2 * num1) / 3;
	double num3 = (num / (num2 * num2) + 2 * num2) / 3;*/
	return x;
}