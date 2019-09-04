/**
 * Quadratic maximum contiguous subsequence sum algorithm.
*/

#include <iostream>
#include <vector>

int maxSubSum2(const std::vector<int> & a)
{
    int maxSum = 0;


    for(int i = 0; i < a.size(); ++i) {
	int thisSum = 0;
	for (int j = i; j < a.size(); ++j) {
	    thisSum += a[j];

	    if (thisSum > maxSum)
		maxSum = thisSum;
	}
    }

    return maxSum;
}

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i)
	std::cin >> numbers[i];
    int result = maxSubSum2(numbers);
    std::cout << result << "\n";
    return 0;
}
