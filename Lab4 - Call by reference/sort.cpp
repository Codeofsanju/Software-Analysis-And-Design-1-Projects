/*
    Author: Sanjeev Sharma
    Description: Simplifying fractions: a function that sorts the values of the integer parameters passed by reference, so they become aranged from least to greatest.
*/
#include <iostream>
#include <cstdlib>
using namespace std;

void swap(int &x, int &y);
void sort(int &a, int &b, int &c);

int main (){
    int a = 10, b = 6, c = 8;
    cout << a << " " << b << " " << c << endl;
    sort(a, b, c); 

    a = 8; b = 6; c = 10;
    cout << a << " " << b << " " << c << endl;
    sort(a, b, c);

    a = 6; b = 8; c = 10;
    cout << a << " " << b << " " << c << endl;
    sort(a, b, c);

    a = 10; b = 8; c = 6;
    cout << a << " " << b << " " << c << endl;
    sort(a, b, c);

    a = 6; b = 10; c = 8;
    cout << a << " " << b << " " << c << endl;
    sort(a, b, c);

    a = 10; b = 8; c = 6;
    cout << a << " " << b << " " << c << endl;
    sort(a, b, c);

    return 0;

}

void sort(int &a, int &b, int &c){
    if(a > b){
        swap(a,b);
    }
    if(a > c){
        swap(a,c);
    }
    if(b > c){
        swap(b,c);
    }   
    cout << "Sorted: " << a << " " << b << " " << c << "\n\n";
}

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}