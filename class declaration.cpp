#include <iostream>
#include <string>
using namespace std;

// class declaratioin
class Teacher {
	//properties / attributes
private: // important / private information should be under private
	double salary;

public:
	string name, dept, subject;

	//methods / member functions
	void changeDept(string newDept){
		dept = newDept;
	}

	// private members and methdos can still be accessed by the functions
	// setter
	void setSalary(double s){
		salary = s;
	}
	// getter
	double getSalary(){
		return salary;
	}
};

class Student {
public:
	string name; int age, rollno;
};

int main(void){

	// Object declaration
	Teacher t1; //can be one or multiple
	
	t1.name = "Raj";
	t1.dept = "Comp Sci";
	t1.subject = "C++";
	t1.setSalary(250000);


	cout << t1.name << endl;
	cout << t1.getSalary() << endl;
	return 0;
}
