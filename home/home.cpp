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
//#include <iostream>
//using namespace std;
//
//class Employee {
//	int id;
//	string firstName;
//	string lastName;
//	int salary;
//
//public:
//	Employee(int id, string firstName, string lastName, int salary) {
//		this->id = id;
//		this->firstName = firstName;
//		this->lastName = lastName;
//		this->salary = salary;
//	}
//	int getID() {
//		return id;
//	}
//	string getFirstName() {
//		return firstName;
//	}
//	string getLastName() {
//		return lastName;
//	}
//	string getName() {
//		return firstName + " " + lastName;
//	}
//	int getSalary() {
//		return salary;
//	}
//	void setSalary(int salary) {
//		if (salary > 100000) {
//			this->salary = salary;
//		}
//	}
//	int getAnnualSalary() {
//		return salary * 12;
//	}
//	int raiseSalary(int percent) {
//		int raise = (salary * percent) / 100;
//		int salaryAfterRaise = salary + raise;
//		return salaryAfterRaise;
//	}
//};
//int main() {
//	Employee emp1(1234, "Nehal", "Gamal", 10000000);
//	cout << "Employee 1 ID: " << emp1.getID() << endl;
//	cout << "Employee 1 Name: " << emp1.getName() << endl;
//	cout << "Employee 1 Salary: " << emp1.getSalary() << endl;
//	cout << "Employee 1 Annual Salary: " << emp1.getAnnualSalary() << endl;
//	cout << "Employee 1 Salary After Raise: " << emp1.raiseSalary(50) << endl;
//	cout << "-------------------" << endl;
//
//	emp1.setSalary(2000000);
//	cout << "Employee 1 Salary: " << emp1.getSalary() << endl;
//	cout << "Employee 1 Salary After Raise: " << emp1.raiseSalary(50) << endl;
//	return 0;
//}
//===================================
//Task 3
//#include <iostream>
//using namespace std;
//
//class Account {
//	string id;
//	string name;
//	int balance;
//public:
//	Account(string id,string name) {
//		this->id = id;
//		this->name = name;
//		balance = 0;
//	}
//	Account(string id,string name,int balance) {
//		this->id = id;
//		this->name = name;
//		this->balance = balance;
//	}
//	string getID() {
//		return id;
//	}
//	string getName() {
//		return name;
//	}
//	int getBalance() {
//		return balance;
//	}
//	int credit(int amount) {
//		balance += amount;
//		return balance;
//	}
//	int debit(int amount) {
//		balance -= amount;
//		return amount;
//	}
//	void transferTo(Account &account, int amount) {
//		if (amount <= balance) {
//			balance -= amount;
//			account.balance += amount;
//		}
//		else {
//			cout << "Amount exceeded balance" << endl;
//		}
//		
//	}
//};
// 
//int main() {
//	Account acc1("192712", "Nehal");
//	cout <<"Account 1: " << acc1.getID() << " " << acc1.getName()<< " " << acc1.getBalance() << endl;
//	cout << "==================" << endl;
//	Account acc2("192712", "Nehal",1000);
//	cout << "Account 2: " << acc2.getID() << " " << acc2.getName() << " " << acc2.getBalance() << endl;
//	acc2.debit(100);
//	cout << "Account 2 After Debit: " << acc2.getBalance()<<endl;
//	acc2.credit(200);
//	cout << "Account 2 After Credit: " << acc2.getBalance()<<endl;
//	acc2.transferTo(acc1, 1000);
//	cout << "Account 1 After Transfer: " << acc1.getBalance()<<endl;
//	return 0;
//}
//==================================
#include <iostream>
using namespace std;

class Time {
	int hour;
	int minute;
	int second;
public:
	Time(int hour, int minute, int second) {
		this->hour = hour;
		this->minute = minute;
		this->second = second;
	}
	int getHour() {
		return hour;
	}
	int getMinute() {
		return minute;
	}
	int getSecond() {
		return second;
	}
	void setHour(int hour) {
		this->hour = hour;
	}
	void setMinute(int minute) {
		this->minute = minute;
	}
	void setSecond(int second) {
		this->second = second;
	}
	void setTime(int hour, int minute, int second) {
		this->hour = hour;
		this->minute = minute;
		this->second = second;
	}
	Time nextSecond() {
		second++;
		if (second == 60) {
			
			second = 0;
			minute++;
			if (minute == 60) {
				minute = 0;
				hour++;
				if (hour == 24) {
					hour = 0;
				}
			}
		}
		
		return Time(hour, minute, second);
	}
	Time previousSecond() {
		second--;
		if (second == -1) {
			second = 59;
			minute--;
			if (minute == -1) {
				minute = 59;
				hour--;
				if (hour == -1) {
					hour = 23;
				}
				
			}
			
		
			
		}
		
		
		return Time(hour, minute, second);
	}
};

int main() {
	Time t1(4, 59, 59);
	t1.nextSecond();
	cout << "T1  " << t1.getHour() << " : " << t1.getMinute() << " : " << t1.getSecond() <<endl;
	Time t2(4, 0, 0);
	t2.previousSecond();
	cout << "T2 " << t2.getHour() << " : " << t2.getMinute() << " : " << t2.getSecond() << endl;
	return 0;
}