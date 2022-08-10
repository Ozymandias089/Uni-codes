// pass-by-value
#include<iostream>
using namespace std;

void fun(int y);

int main()
{
	int x = 10;
	//call fun() with x as argument
	fun(x);
	//check if value of x has changed(it did not)
	cout << "x-value inside main() = " << x << endl;
	return 0;

}

void fun(int y)
{
	y++;
	cout << "y-value inside fun() = " << y << endl;
	return;
}
