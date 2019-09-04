/**
 * Performs the standard binary search using two comparisons per level.
 * Return index where item is found or -1 if not found.
*/

#include <iostream>

template <typename Comparable>

int binarySearch(const std::vector<Comparable> & a, const Comparable & x) {

    int low = 0, high = a.size()-1;

    while (low <= high) {
	int mid = (low + high) / 2;

	if (a[mid] < x)
	    low = mid + 1;
	else if(a[mid] > x)
	    high = mid - 1;
	else
	    return mid; // Found
    }
    return NOT_FOUND;   // NOT_FOUND is defined as -1

}

int main() {

    
    return 0;
}
