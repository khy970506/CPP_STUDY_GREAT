#include <iostream>

using namespace std;

namespace MySpace1
{
	namespace InnerSpace
	{
		int my_function()
		{
			cout << "my function" << endl;
			return 0;
		}
	}

	int doSomething(int a, int b)
	{
		cout << "doSomething" << endl;
		return 0;
	}
}

int main()
{
	using namespace MySpace1::InnerSpace;
	using namespace MySpace1;

	my_function();
	doSomething(1,2);
	return 0;
}