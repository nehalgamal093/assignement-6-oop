//Task 1
//#include <iostream>
//using namespace std;
//
//class Circle {
//	double radius;
//	string color;
//public:
//	Circle() {
//		radius = 1.0;
//		color = "red";
//	}
//	Circle(double radius) {
//		this->radius = radius;
//	}
//	Circle(double radius, string color) {
//		this->radius = radius;
//		this->color = color;
//	}
//	double getRadius() {
//		return radius;
//	}
//	string getColor() {
//		return color;
//	}
//	void setRadius(double radius) {
//		this->radius = radius;
//	}
//	void setColor(string color) {
//		if (radius > 0) {
//			this->color = color;
//		}
//	}
//	double getArea() {
//		return 3.14 * radius * radius;
//	}
//};
//int main() {
//	//Default Constructor
//	Circle circle;
//	cout <<	"Circle " << circle.getColor() << endl;
//	cout << "Circle " << circle.getRadius() << endl;
//	cout << "Circle " << circle.getArea() << endl;
//	cout << "======" << endl;
//
//	//Parameterized Constructor with two parameters radius and color
//	Circle circle1(2, "blue");
//	cout << "Circle 1 " << circle1.getColor() << endl;
//	cout << "Circle 1 " << circle1.getRadius() << endl;
//	cout << "Circle 1 " << circle1.getArea() << endl;
//	cout << "======" << endl;
//
//	//Parameterized Constructor with one parameter radius 
//	Circle circle2(3);
//	circle2.setColor("yellow");
//	cout << "Circle 2 " << circle2.getColor() << endl;
//	cout << "Circle 2 " << circle2.getRadius() << endl;
//	cout << "Circle 2 " << circle2.getArea() << endl;
//	cout << "======" << endl;
//	return 0;
//}
//===================================
//Task 2
#include <iostream>
using namespace std;

class Employee {
	int id;
	string firstName;
	string lastName;
	int salary;

public:
	Employee(int id, string firstName, string lastName, int salary) {
		this->id = id;
		this->firstName = firstName;
		this->lastName = lastName;
		this->salary = salary;
	}
	int getID() {
		return id;
	}
	string getFirstName() {
		return firstName;
	}
	string getLastName() {
		return lastName;
	}
	string getName() {
		return firstName + " " + lastName;
	}
	int getSalary() {
		return salary;
	}
	void setSalary(int salary) {
		if (salary > 100000) {
			this->salary = salary;
		}
	}
	int getAnnualSalary() {
		return salary * 12;
	}
	int raiseSalary(int percent) {
		int raise = (salary * percent) / 100;
		int salaryAfterRaise = salary + raise;
		return salaryAfterRaise;
	}
};
int main() {
	Employee emp1(1234, "Nehal", "Gamal", 10000000);
	cout << "Employee 1 ID: " << emp1.getID() << endl;
	cout << "Employee 1 Name: " << emp1.getName() << endl;
	cout << "Employee 1 Salary: " << emp1.getSalary() << endl;
	cout << "Employee 1 Annual Salary: " << emp1.getAnnualSalary() << endl;
	cout << "Employee 1 Salary After Raise: " << emp1.raiseSalary(50) << endl;
	cout << "-------------------" << endl;

	emp1.setSalary(2000000);
	cout << "Employee 1 Salary: " << emp1.getSalary() << endl;
	cout << "Employee 1 Salary After Raise: " << emp1.raiseSalary(50) << endl;
	return 0;
}