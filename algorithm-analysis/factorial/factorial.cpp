/**
 * Simple program
 * @author
 * Abdoulaye Diallo <vonewman7@gmail.com>
*/


#include <iostream>


long factorial(int n);

int main()
{
    int n = 7;

    std::cout << factorial(n) << std::endl;
    return 0;
}

long factorial(int n)
{
    if (n <= 1)
	return 1;
    else
	return n * factorial(n - 1);
}
