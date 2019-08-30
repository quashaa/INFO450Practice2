#include <iostream>
using namespace std;

int main()
{
	int value = 0, i;
	do
	{
		cout << "Please enter a value below:" << endl;
		cin >> value;
		for (i = value - 1; i > 1; i--)
		{
			if (value % i == 0)
			{
				cout << "This value is not a prime number." << endl;
					break;
			}
		}
		if (i == 1)
			cout << "This value is a prime number!" << endl;

	} while (value != 0);

	return 0;
}