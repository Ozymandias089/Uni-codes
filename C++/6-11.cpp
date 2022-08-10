// func w/ return value and parameter
#include<iostream>
using namespace std;

int larger(int fst, int snd)
{
	int max;
	if(fst > snd)
	{
		max = fst;
	}
	else 
	{
		max = snd;
	}
	return(max);
}

int main()
{
	int fst, snd;

	cout << "Enter first number : ";
	cin >> fst;
	cout << "Enter second number : ";
	cin >> snd;

	cout << "largest between the two is " << larger(fst, snd) << endl;
	return 0;
}
