#include <iostream>
#include <vector>

using namespace std;

template <typename Container>
void removeEveryOtherItem(Container & lst)
{
    auto itr = lst.begin();

    while(itr != lst.end()) {
	itr = lst.erase(itr);
	if (itr != lst.end()) {
	    ++itr;
	}

int main() {
    vector<int> v;

    v.push_back(12);
    v.push_back(7);
    v.push_back(9);
    v.push_back(42);
    v.push_back(17);

    //for (vector<int>::iterator itr = v.begin(); itr != v.end(); ++itr) {
    //cout << *itr << endl;
    //}

    vector<int>::iterator itr = v.begin();
    while(itr != v.end())
	cout << *itr++ << endl;
    
    return 0;
}
