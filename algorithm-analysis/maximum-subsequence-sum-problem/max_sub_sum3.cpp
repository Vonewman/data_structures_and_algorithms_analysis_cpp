/**
 * 
 */

#include <iostream>
#include <vector>

int maxSumRec(const std::vector<int> & a, int left, int right)
{
    if (left == right) // Base Case
	if (a [left] > 0)
	    return a[left];
        else
	    return 0;

    int center = (left + right) /2;
    int maxLeftSum = maxSumRec(a, left, center);
    int maxRightSum = maxSumRec(a, center + 1, right);

    int maxLeftBorderSum = 0, leftBorderSum = 0;
    for (int i = center; i >= left; --i) {
	leftBorderSum += a[i];
	if (leftBorderSum > maxLeftBorderSum)
	    maxLeftBorderSum = leftBorderSum;
    }

    int maxRightBorderSum = 0, rightBorderSum = 0;
    for(int j = center + 1; j <= right; ++j) {
	rightBorderSum += a[j];
	if(rightBorderSum > maxRightBorderSum)
	    maxRightBorderSum = rightBorderSum;
    }

    return max3(maxLeftSum, maxRightSum,
		     maxLeftBorderSum + maxRightBorderSum);
}

/**
 * Driver for divide-and-conquer maximum contiguous
 * subsequence sum algorithm.
 */

int maxSubSum3(const std::vector<int> & a)
{
    return maxSumRec(a, 0, a.size()-1);
}

int main()
{
    int n;
    std::cin>> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i)
	std::cin >> numbers[i];
    int result = maxSubSum3(numbers);
    std::cout << result << "\n";
    return 0;
}
