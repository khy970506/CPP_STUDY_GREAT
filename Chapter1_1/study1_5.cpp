#include <iostream> // cout, cin, endl, ...

using namespace std;

void print()
{
	cout << "Hello" << endl;
}


void addTwoNumbers(int a, int b)
{
	cout << a + b << endl;
}

int main()
{
	addTwoNumbers(1, 2);
	print();

	return 0;
}