#include <iostream>
using namespace std;

int main(void){
	
	int num;

	cout << "Enter number: ";
	cin >> num;

	if( num % 2 == 0 ) cout << "Even\n";
	else cout << "Odd\n";

	return 0;
}
