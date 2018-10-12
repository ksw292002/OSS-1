#include <iostream>
using namespace std;

int main () 
{
	for (int i = 1; i < 9; i++)
	{
		cout << "=========" << i << "��" << "=========" << endl;
		for (int j = 1; j < 9; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
		cout << endl;
	}

	cout << "This is SANGWI/KANG" << endl;
	return 0;
}