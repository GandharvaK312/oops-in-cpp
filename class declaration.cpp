#include <iostream>
#include <ostream>
#include <string>
using namespace std;

// class declaratioin
class Teacher {
	//properties / attributes
private: // important / private information should be under private
	double salary;

public:
	string name, dept, subject;
	
	// non-parameterized contructor
	Teacher(){ //always declared in public scope
//		cout << "Hi, I am constructor\n"; // manual initialization of constructor (avoidable btw)
        	dept = "comp sci";
	}

	// parameterized constructor
	// teacher constructor passed with temporary params

//	Teacher(string n, string d, string s, double sal){
//		name = n; dept = d; s = subject; salary = sal;
//	}

	// teacher constructor passed with parameters same as properties
	Teacher(string name, string dept, string subject, double salary){
		this -> name = name; //this is used to refer to the object's "name" property
		this -> dept = dept;
		this -> subject = subject;
		this -> salary = salary;
	}

	// Shallow copy: Manual declaration and definition of copy constructor
	Teacher(Teacher &orgObj){ // pass by reference
//		cout << "I am a custom copy constructor\n";
		this -> name = orgObj.name;
		this -> subject = orgObj.subject;
		this -> dept = orgObj.dept;
		this -> salary = orgObj.salary;
	}

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

	void getInfo(){
		cout << "name: " << name << endl;
		cout << "subject: " << subject << endl;
		cout << "dept: " << dept << endl;
		cout << "Salary: " << salary << endl;
	}
};

class Student {
public:
	string name; double* cgpaPtr;

	Student(string name, double cgpa){
		this -> name = name;
		cgpaPtr = new double;
		*cgpaPtr = cgpa;
	}

	Student(Student &obj){
		this -> name = obj.name;
		this -> cgpaPtr = obj.cgpaPtr;
	}

	void getInfo(){
		cout << "name: " << name << endl;
		cout << "cgpa: " << *cgpaPtr << endl;
	}
};

int main(void){

	// Object declaration
	Teacher t1("Murti", "cs", "digital logic", 12000); //can be one or multiple. Constructor is called.
	
	t1.name = "Raj";
	t1.dept = "Comp Sci";
	t1.subject = "C++";
	t1.setSalary(250000);

	// cout << t1.dept << endl;
//	t1.getInfo();
	Teacher t2(t1); //default invoked copy constructor copied properties of t1 into t2.
	// t2.getInfo();

	Student s1("rahul kumar", 9.9);
	s1.getInfo();
	
	Student s2(s1); // shallow copy
	*(s2.cgpaPtr) = 9.2;
	s1.getInfo(); // changing s2's cgpa also changed s1's properties. this is one of the most important problems with shallow copy
	
	return 0;
}
