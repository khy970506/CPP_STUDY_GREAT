#include <iostream> // cout, cin, endl, ...

using namespace std;

int main()
{
	using namespace std;
	int x = 1;

	cout << "Before your input, x was " << x << endl;

	cin >> x;

	cout << "Your input is " << x << endl;

	return 0;
}