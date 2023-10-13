#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v{ 1,2,3 };

	// Modern C++:
	for (auto& num : v)
	{
		std::cout << num;
	}
