// Factorial function, recursive
#include <iostream>
using namespace std;

unsigned int factorial (unsigned int n);

int main() {
	unsigned int num;
	cout << "Enter number: ";
	cin >> num;
	cout << num << "! = " << factorial(num) << endl;
}

unsigned int factorial (unsigned int n) {
	static unsigned int count = 0;
	count++;
	cout << " " << count << endl;
	return n > 0 ? n * factorial(n - 1) : 1;
}