#include <iostream>
int main()
{

	int max = -100000;
	int sum = 0;
	int ii = 1;
	int n;
	std::cin >> n;

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
	std::cout << ii << std::endl;
}
