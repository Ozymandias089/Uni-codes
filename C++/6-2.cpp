#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a, b, c;
	double term;

	cout << "Enter value of a : ";
	cin >> a;
	cout << "Enter value of b : ";
	cin >> b;
	cout << "Enter value of c : ";
	cin >> c;

	// b^2 - 4ac
	term = pow(b, 2) - 4 * a * c;
	if(term < 0)
	{
		cout << "Root does not exists." << endl;
	}
	else if(term == 0)
	{
		cout << "Two roots are the same value." << endl;
		cout << "x1 = x2 = " << -b / (2 * a) << endl;
	}
	else 
	{
		cout << "There are two seperate roots exists." << endl;
		cout << "x1 = " << (-b + sqrt(term)) / (2 * a) << endl;
		cout << "x2 = " << (-b - sqrt(term)) / (2 * a) << endl;
	}
	return 0;
}
