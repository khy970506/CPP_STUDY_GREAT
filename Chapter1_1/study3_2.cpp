#include <iostream>

using namespace std;

int main()
{
	cout << ((true && true) || false) << endl; // T
	cout << ((false && true) || true ) << endl; // T
	cout << ((false && true) || false || true) << endl; // T
	cout << ((14 > 13 || 2 > 1) && (9 > 1))<< endl;  // T
	cout << !(2314123 > 2 || 123123 > 2387) << endl; // F

	return 0;
}
