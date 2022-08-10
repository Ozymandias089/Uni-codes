//Pass-by-reference
#include<iostream>
using namespace std;

void fun(int& y);//& indicates y is reference

int main()
{
	int x = 10;

	fun(x);

	cout << "x inside main() = " << x << endl;
	return 0;
}

void fun(int& y){
	y++;
	cout << "y inside fun() = " << y << endl;
	return;
}
