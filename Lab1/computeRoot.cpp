//Author: Sanjeev Sharma
//Task: Write a program that computes the roots of a quadratic equation with integer coefficients.
//Purpose: Practice if, if else cases.

#include <iostream>
#include <cmath> //for sqrt
using namespace std;

void computeRoot(int a, int b, int c);

int main(){
    cout << "This program will compute roots of a quadtratic equation, ax^2 + bx + c = 0: \n";
    
    cout << "Please enter integer a: ";
    int a;
    cin >> a;
    
    cout << "Please enter integer b: ";
    int b;
    cin >> b;
    
    cout << "Please enter integer c: ";
    int c;
    cin >> c;

    computeRoot(a, b, c);
}

void computeRoot(int a, int b, int c){
// First we must figure out how many roots we will have by finding the discriminant:
    int discriminant = b*b - 4*a*c;
// If dicriminant = 0, then the quadratic equation will have exactly one real number solution:
    if(discriminant == 0){
        cout << "One root of multiplicity two: \n";
        double x = (-b/(2.0*a));
        cout << "x = " << x << endl;

    }
// If dicriminant > 0, then the quadratic equation will have exactly 2 real number solutions:
    else if(discriminant > 0){
        cout << "Two roots: \n";
        double x1 = (-b + sqrt(discriminant))/(2.0*a);
        double x2 = (-b - sqrt(discriminant))/(2.0*a);
        cout << "x1 = " << x1 << "\nx2 = " << x2 << endl;

    }
// If discriminant < 0, then the quadratic equation will have no real solution, instead two complex number solutions:
    else{
        cout << "No roots\n";
    }
}