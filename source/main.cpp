#include <iostream>
#include <vector>
#include <ranges>
#include <format>

int main()
{
	std::cout << "Hello World" << std::endl;

	std::vector<int> vec{ 9,10,11,12,13,14 };

	if (int size = vec.size(); size > 0)
	{
		for (auto num : vec | std::views::filter([](int x) {
			return x % 2 == 0;
			}))
		{
			std::cout << std::format("Vector Num[{}]", num) << std::endl;
		}
	}

	return 0;
}