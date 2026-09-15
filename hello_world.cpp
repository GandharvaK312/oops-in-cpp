#include <iostream>
using namespace std;

double square(double x){
	return x * x;
}

void print_square(double x){
 	cout << "square of " << x << " is " << square(x) << endl;
}

int main(void){
	std :: cout << "Hello, World!\n";
	cout << "without std Tehe\n";
	print_square(45);
	return 0;
}
