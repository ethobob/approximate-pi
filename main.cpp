#include <iostream>
#include <iomanip>

double approximate(const int i);

int main()
{

	const int ACCURACY = 10;
	const int PRECISION = 4;

	std::cout << "i\tm(i)\n";
	for (int index = 0; index < ACCURACY; index++)
	{
		const int i = 1 + (100 * index);
		std::cout << std::setprecision(PRECISION) << std::fixed <<  i << "\t" << approximate(i) << "\n";
	}

	return 0;
}

double approximate(const int i)
{
	double fraction = 0;
	for (int index = 1; index <= i; index++)
	{
		fraction += (pow((-1), (index + 1))) / ((2 * index) - 1);
	}
	return 4 * fraction;
}