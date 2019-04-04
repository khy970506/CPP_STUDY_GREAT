#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	using namespace std;

	unsigned int a = 3;

	cout << bitset<4>(a) << endl;

	unsigned int b = a << 1;

	cout << bitset<4>(b) << endl;


	return 0;
}