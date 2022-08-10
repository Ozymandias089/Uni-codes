/*******************************************************
*  using default parameter(function overloading p303)  *
********************************************************/

#include<iostream>
using namespace std;

// Declare func : default value of second parameter is 40
double calcEarnings(double rate, double hours = 40);

int main(){
	// first usage of func uses DefPar
	cout << "Salary of emp1: " << calcEarnings(22.0) << endl;
	cout << "Salary of emp2: " << calcEarnings(12.50, 18) << endl;
	return 0;
}

/*****************************************************
*  No DefPar because it already used in decleration  *
******************************************************/

double calcEarnings(double rate, double hours)
{
	double pay;
	pay = hours * rate;
	return pay;
}
