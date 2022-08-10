//swap two value
#include<iostream>
using namespace std;

void swap(int& first, int& second);

int main()
{
	int first = 10;
	int second = 20;
	swap(first, second);

	cout << "first value in main() = " << first << endl;
	cout << "second  value in main() = " << second << endl;
	return 0;
}

void swap(int& fst, int& snd)
{
	int temp = fst;
	fst = snd;
	snd = temp;
	return;
}
