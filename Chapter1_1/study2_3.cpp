#include <iostream>
#include "MY_CONSTANTS.h"

int main()
{
	using namespace std;

	double radius;
	cin >> radius;

	double circumference = 2.0 * radius * constants::pi;

	return 0;
}