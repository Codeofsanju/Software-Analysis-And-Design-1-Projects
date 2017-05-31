/*
    Author: Sanjeev Sharma
    Description: Swap: a program that contains a funtion that gets 2 integer variables passed by reference, and swaps the values assigned to those integer variable.
*/
#include <iostream>
using namespace std;

void swap(int &x, int &y);

int main(){
    int a = 5, b = 10;
    cout << "a = " << a << " b = " << b << endl;
    swap(a, b);
    cout << "a = " << a << " b = " << b << endl;
    swap(a, b);
    cout << "a = " << a << " b = " << b << endl;
}

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}