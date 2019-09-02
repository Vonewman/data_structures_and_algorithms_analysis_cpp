#include <iostream>

using namespace std;

int sum(int n);

int main()
{
    
    return 0;
}

int sum(int n)
{
    int partialSum;

    partialSum = 0;

    for(int i = 1; i <= n ; ++i)
	partialSum += i * i * i;
    return partialSum;
}
