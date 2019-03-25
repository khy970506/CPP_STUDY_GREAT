#include <iostream> // cout, cin, endl, ...
#include <cstdio> // printf

int main()
{
	using namespace std;

	int x = 1024;
	double pi = 3.141592;

	cout << "I love this lecture!\n"; // << std::endl;
	cout << "x is " << x << " pi is " << pi << endl;

	cout << "abc" << "\t" << "def" << endl;
	cout << "ab" << "\t" << "cdef" << endl;

	cout << "\a";

	return 0;
}