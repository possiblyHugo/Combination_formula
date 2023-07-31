#include <iostream>

int factorial(int n);

int main()
{
	int combinations = 0;
	int n = 0;
	int k = 0;

	// User input
	std::cout << "n = ";
	std::cin >> n;

	std::cout << "k = ";
	std::cin >> k;

	// Formula
	/*
	*  nCk = n! / k! (n-k)!  
	*/

	std::cout << "Formula: " <<
		n << "C" << k << " = " <<
		n << "!" << " / " << k << "!" <<
		"(" << n << "-" << k << ")!" << std::endl;

	// Calculation
	combinations = (factorial(n)) / (factorial(k) * (factorial(n - k)));
	std::cout << "Total possible combinations: " << combinations;
		
	return 0;
}

int factorial(int n)
{
	int factorial_sum = n;
	for (int factor = n; factor > 0; factor--)
	{
		if (factor - 1 <= 0)
		{
			break;
		}
		factorial_sum *= factor - 1;
		// std::cout << factor << " x " << factor - 1 << " = " << factor * (factor - 1) << std::endl;
	}

	return factorial_sum;
}
