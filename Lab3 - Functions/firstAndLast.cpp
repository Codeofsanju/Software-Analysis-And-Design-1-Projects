/*
	Author: Sanjeev Sharma
*/
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

// returns the first digit of the argument
// assumes that the argument is a non-negative integer
int first(int n);

// returns the last digit of the argument
// assumes that the argument is a non-negative integer
int last(int n);

// returns true if the first and the last digits of
// the argument are equal.
// assumes that the argument is a non-negative integer
bool first_equals_last(int n);


int main() {
	srand(time(NULL));

	// test
	for (int i = 2; i<16; i++) {
		int num = exp(abs(i)) * 0.0002 * i * (rand() % 1000);
		cout << num << "\t";
		if (first_equals_last(num)) cout << "true";
		cout << endl;
	}
}


bool first_equals_last(int n) {
    return first(n) == last(n);
}

int first(int n) {
    while(n/10 > 0){
        n /= 10;
    }
    return n;
	
}

int last(int n) {
	return n % 10;
}