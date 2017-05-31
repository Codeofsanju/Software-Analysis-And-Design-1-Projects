/*
    Author: Sanjeev Sharma
    Description: Simplifying fractions: a function takes two integer parmeter, numerator n and denominator d, passed by reference, and simplifies this fraction. 
*/
#include <iostream>
#include <cstdlib>
using namespace std;

void simplify(int &n, int &d); 

int main(){
    int a = 24;
    int aNeg = -24;
    int b = 70;

    cout << a << "/" << b;
    simplify(a, b);
    cout << " simplifies to: " << a << "/" << b << endl;

    // change b back to 70, it it changed in last simplify function call
    b = 70;

    cout << aNeg << "/" << b;
    simplify(aNeg, b);
    cout << " simplifies to: " << aNeg << "/" << b << endl;

    a = 12034;
    aNeg = -12034;
    b = 24068;

    cout << "\n" << a << "/" << b;
    simplify(a, b);
    cout << " simplifies to: " << a << "/" << b << endl;

    // change b back to 293002, it it changed in last simplify function call
    b = 24068;

    cout << aNeg << "/" << b;
    simplify(aNeg, b);
    cout << " simplifies to: " << aNeg << "/" << b << endl;


}

void simplify(int &n, int &d){
    for(int i = abs(d); i > 0; i--){
        if(n % i == 0 && d % i == 0){
            n = n/i;
            d = d/i;
            break;
        }
    }
}