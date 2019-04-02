#include <iostream>

using namespace std;

int main()
{
	double d1(100 - 9999); // 0.01
	double d2(10 - 9.99);  // 0.01

	const double epsilon = 1e-16;

	if (abs(d1 - d2) < epsilon)
		cout << "Approximately equal" << endl;
	else
		cout << "Not equal" << endl;

	return 0;
}