#include <iostream>
using namespace std;

int main(void){

	int l, b;

	cout << "Enter l and b: ";
	cin >> l >> b;

	cout << "area: " <<  l * b << endl;
	cout << "perimeter: " << 2 * (l + b) << endl;

	return 0;
}
