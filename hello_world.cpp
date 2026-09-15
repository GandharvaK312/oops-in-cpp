#include <iostream>
using namespace std;

double square(double x){
	return x * x;
}

void print_square(double x){
	cout << "square of " << x << " is " << square(x) << endl;
}

/*
// Function Overloading
void print(int); // takes an integer argument
void print(double); // takes a floating-point argument
void print(string); // takes a string argument

void user(){
print(42); // calls print(int)
print(9.65); // calls print(double)
print("Barcelona"); // calls print(string)
}


void print(int,double);
void print(double,int);
void user2()
{
print(0,0); // error : ambiguous
}
bool // Boolean, possible values are true and false
char // character, for example, 'a', 'z', and '9'
int // integer, for example, -273, 42, and 1066
double // double-precision floating-point number, for example, -273.15, 3.14, and 6.626e-34
unsigned // non-negative integer, for example, 0, 1, and 999 (use for bitwise logical operations)

dont need to specify type
auto b = true; // a bool
auto ch = 'x'; // a char
auto i = 123; // an int
auto d = 1.2; // a double
auto z = sqrt(y); // z has the type of whatever sqr t(y) returns
auto bb {true}; // bb is a bool

vector<int> vec; // vec is global (a global vector of integers)
struct Record {
string name; // name is a member or Record (a string member)
// ...
};
void fct(int arg) // fct is global (a global function)
// arg is local (an integer argument)
{
string motto {"Who dares wins"}; // motto is local
auto p = new Record{"Hume"}; // p points to an unnamed Record (created by new)
// ...
}
*/

int main(void){
	std :: cout << "Hello, World!\n";
	cout << "without std Tehe\n";
	print_square(45);
	return 0;
}
