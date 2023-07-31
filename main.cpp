#include <iostream>

int factorial(int n);

int main()
{
	// Formula
	/*
	*  nCk = n! / k! (n-k)!  
	*/

	

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
