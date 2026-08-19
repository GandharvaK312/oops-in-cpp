#include <iostream>
using namespace std;

#define CONVERTING_FACTOR (9.0/5.0)

int main(void){

	float far, cel;

	cout << "Enter celsius: ";
	cin >> cel;

	cout << "Farenheit scale: " << (cel * CONVERTING_FACTOR) + 32.0 << " degree F" << endl;

	return 0;
}
