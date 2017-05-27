//Author: Sanjeev Sharma
//Task: This program reads the file redirected to standard input. The file contains positive integers. After reading the file, the program prints out the largest integer found in the file. 
//Purpose: Practice taking input from file using file redirection
#include <iostream>
using namespace std;

int largestInt();

int main (){
    cout << largestInt() << endl;
    return 0;
}

int largestInt(){
    int max = 0;        // max holder is declared at 0
    int x;              // for integeres to be read from file
    while(cin >> x){    // while all integers are read from file
        if(x >= max){   // if integer is greator than previous max
            max = x;    // set to max
        }
    }
    return max;         // return max
}
