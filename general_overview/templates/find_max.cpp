#include <iostream>
#include <vector>
#include <string>
using namespace std;

/**
 * Return the maximum item in array a.
 * Assumes a.size() > 0.
 * Comparable objects must provides operator< and operator= 
*/
template <typename Comparable>
const Comparable & findMax(const vector<Comparable> & a)
{
    int maxIndex = 0;

    for (int i = 1; i < a.size(); ++i)
	if (a[maxIndex] < a[i])
	    maxIndex = i;
    return a[maxIndex];
}

