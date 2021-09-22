#include <iostream>
int main()
{

	int max = -100000;
	int sum = 0;

	int n;
	std::cin >> n;
	int ii = 0;
	for (int i = 0; i < n; i++)
	{
		int x;

		std::cin >> x;
		if (x % 10 == 0 || x % 10 == 7)
		{
			sum = sum + x;

		}
		if (x > max)
		{

			max = x;
			ii = i;
		}
	}
	std::cout << sum << std::endl;
	std::cout << max << std::endl;
	std::cout << ii + 1 << std::endl; // номер на 1 больше индекса
}
