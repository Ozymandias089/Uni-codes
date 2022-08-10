// void func w/ parameter
#include<iostream>
using namespace std;

void pattern(int size)
{
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return;
}

int main()
{
	int patternSize;

	do
	{
		cout << "Enter pattern size: ";
		cin >> patternSize;
	} while(patternSize <= 0);

	pattern(patternSize);
}

