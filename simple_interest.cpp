#include <iostream>
using namespace std;



int main(void){
	int p, t, r;

	cout << "Enter principal amount: ";
	cin >> p;

	cout << "Enter time: ";
	cin >> t;

	cout << "Enter rate of interest: ";
	cin >> r;

	cout << "Simple interest: " << (p * t * r)/100 << endl;

	return 0;
}
