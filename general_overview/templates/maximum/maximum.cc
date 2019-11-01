#include <iostream>

using namespace std;

template <typename T>
T maximum(const T& a, const T& b)
{
  if (a>b) {
    return a;
  }
  return b;
}

int main()
{
  double pi(3.14);
  double e(2.71);

  cout << maximum<double>(pi, e) << endl;

  int cave(-1);
  int dernierEtage(12);

  cout << maximum<int>(cave, dernierEtage) << endl;

  unsigned int a(43);
  unsigned int b(87);

  cout << maximum<unsigned int>(a, b) << endl;

  
  return 0;
}
