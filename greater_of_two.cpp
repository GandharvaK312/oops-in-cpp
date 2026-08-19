#include <iostream>
using namespace std;

int main(void){
	int n1, n2;

	cout << "Enter 2 numbers: ";
	cin >> n1 >> n2;

	if(n1 > n2) cout << n1 << " is greater than " << n2 << endl;
	else if(n2 > n1) cout << n2 << " is greater than " << n1 << endl;
	else cout << "Both are equal\n";

	return 0;
}
