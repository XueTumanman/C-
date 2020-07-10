#include <iostream>
#include <exception>
using namespace std;

int a = 10;

int main()
{
	a = INTMAX_MAX * 10;
	try
	{
		int *myarray = new int[a];
	}
	catch (exception &e)
	{
		cout << "Standard exception: " << e.what() << endl;
	}
	return 0;
}