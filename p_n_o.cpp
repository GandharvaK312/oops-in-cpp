#include <iostream>
using namespace std;

int main(void){

	int num;

	cout << "Enter num: ";
	cin >> num;

	if(num > 0) cout << "paw-sitive\n";
	else if(num < 0) cout << "niga-tive\n";
	else cout << "zero\n";

	return 0;
}
