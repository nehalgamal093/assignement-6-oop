//Task 1
#include <iostream>
using namespace std;

class Circle {
	double radius;
	string color;
public:
	Circle() {
		radius = 1.0;
		color = "red";
	}
	Circle(double radius) {
		this->radius = radius;
	}
	Circle(double radius, string color) {
		this->radius = radius;
		this->color = color;
	}
	double getRadius() {
		return radius;
	}
	string getColor() {
		return color;
	}
	void setRadius(double radius) {
		this->radius = radius;
	}
	void setColor(string color) {
		if (radius > 0) {
			this->color = color;
		}
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};
int main() {
	//Default Constructor
	Circle circle;
	cout <<	"Circle " << circle.getColor() << endl;
	cout << "Circle " << circle.getRadius() << endl;
	cout << "Circle " << circle.getArea() << endl;
	cout << "======" << endl;

	//Parameterized Constructor with two parameters radius and color
	Circle circle1(2, "blue");
	cout << "Circle 1 " << circle1.getColor() << endl;
	cout << "Circle 1 " << circle1.getRadius() << endl;
	cout << "Circle 1 " << circle1.getArea() << endl;
	cout << "======" << endl;

	//Parameterized Constructor with one parameter radius 
	Circle circle2(3);
	circle2.setColor("yellow");
	cout << "Circle 2 " << circle2.getColor() << endl;
	cout << "Circle 2 " << circle2.getRadius() << endl;
	cout << "Circle 2 " << circle2.getArea() << endl;
	cout << "======" << endl;
	return 0;
}