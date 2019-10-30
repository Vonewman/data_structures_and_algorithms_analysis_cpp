#include <iostream>


class IntCell{
public:
  explicit IntCell( int initialValue = 0 );
  int read() const;
  void write(int x);
private:
  int storedValue;
};


int main() {
  
  IntCell *m;


  m = new IntCell;
  m->write(5);
  std::cout << "Cell contents: " << m->read() << std::endl;

  delete m;
  return 0;
}


IntCell::IntCell(int initialValue) : storedValue {initialValue}
{}

int IntCell::read() const
{
  return storedValue;
}

void IntCell::write(int x)
{
  storedValue = x;
}
