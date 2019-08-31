#include <iostream>
#include <vector>

int main()
{
    std::vector<int> squares(100);
    int sum = 0;
    for (auto x : squares)
	sum += x;

    return 0;
}
