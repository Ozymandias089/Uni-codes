#include<iostream>
using namespace std;
// 클래스의 선언
class Circle
{
	private:    // 데이터 멤버 선언
		double radius;
	public:     // 멤버함수의 선언
		double getRadius() const;
		double getArea() const;
		double getPerimeter() const;
		void setRadius(double value);
};    // 클래스 정의 끝에는 반드시 세미콜론 필요
// 멤버 함수의 선언(const가 붙으며, 앞에 클래스 이름이 붙음
double Circle::getRadius() const
{
	return radius;
}
double Circle::getArea() const
{
	const double PI = 3.14;
	return(PI * radius * radius);
}
double Circle::getPerimeter() const
{
	const double PI = 3.14;
	return(2 * PI * radius);
}
void Circle::setRadius(double value)
{
	radius = value;
}

int main()
{
	cout << "Circle1 " << endl;
	Circle circle1;
	circle1.setRadius(10.0);
	cout << "Radius: " << circle1.getRadius() << endl;
	cout << "Area: " << circle1.getArea() << endl;
	cout << "Perimeter: " << circle1.getPerimeter() << endl << endl;

	cout << "Circle2 " << endl;
	Circle circle2;
	circle1.setRadius(20.0);
	cout << "Radius: " << circle2.getRadius() << endl;
	cout << "Area: " << circle2.getArea() << endl;
	cout << "Perimeter: " << circle2.getPerimeter() << endl << endl;

	return 0;
}
