/**
 * Linear-time maximum contiguous subsequence sum algorithm.
*/

#include <iostream>
#include <vector>

int maxSubSum4(const std::vector<int> & a)
{
    int maxSum = 0, thisSum = 0;

    for (int j = 0; j < a.size(); ++j) {
	thisSum += a[j];

	if (thisSum > maxSum)
	    maxSum = thisSum;
	else if (thisSum < 0)
	    thisSum = 0;
    }

    return maxSum;

}


int main()
{
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for(int i = 0; i<n; ++i)
	std::cin >> numbers[i];
    int result = maxSubSum4(numbers);
    std::cout << result << "\n";
    return 0;
}
