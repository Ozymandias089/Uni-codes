// parameterless func with return value
#include<iostream>
using namespace std;

int getData()
{
	int data;
	do
	{
		cout << "Enter positive integer : ";
		cin >> data;
	} while(data <= 0);
	return data;
}

int main()
{
	int number = getData();
	cout << "The rightmost number = " << number % 10 << endl;
	return 0;
}
