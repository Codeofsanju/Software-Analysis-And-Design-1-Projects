/*
	Author: Sanjeev Sharma
	Description: Practice functions, return true if even number
*/
#include <iostream>

using namespace std;

// returns true if the argument is even, otherwise false
bool is_even(int n);

int main() {
	// test
	for (int i = -5; i < 6; i++) {
		cout << i << '\t';
		if (is_even(i))
			cout << "even" << endl;
		else
			cout << "odd" << endl;
	}
	return 0;
}

bool is_even(int n) {
	if(n % 2 == 0){
        return true;
    }
    return false;
}