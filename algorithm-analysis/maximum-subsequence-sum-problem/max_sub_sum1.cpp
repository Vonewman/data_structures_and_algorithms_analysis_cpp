/**
 * Cubic maximum contiguous subsequence sum algorithm.
*/

#include <iostream>
#include <vector>

int maxSubSum1(const std::vector<int> &  a)
{
    int maxSum = 0;


    for(int i = 0; i < a.size(); ++i)
	for (int j = i; j < a.size(); ++j)
	    {
		int thisSum = 0;

		for (int k = i; k <= j; ++k)
		    thisSum += a[k];

		if (thisSum > maxSum)
		    maxSum = thisSum;
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

    int result = maxSubSum1(numbers);
    std::cout << result << "\n";
    return 0;
}
