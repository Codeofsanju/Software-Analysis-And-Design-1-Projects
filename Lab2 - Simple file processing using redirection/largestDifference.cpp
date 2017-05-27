//Author: Sanjeev Sharma
//Task: This program reads the file redirected to standard input. The file contains positive integers. After reading the file, the program prints out the largest difference between two integers found in the file. 
//Purpose: Practice taking input from file using file redirection
#include <iostream>
using namespace std;

int largestDifference();

int main (){
    cout << largestDifference() << endl;
    return 0;
}

int largestDifference(){
    int max = 0;        // max holder is declared at 0
    int min;            // min holder
    int x;              // for integeres to be read from file
    while(cin >> x){    // while all integers are read from file
        if(x >= max){   // if integer is greator than previous max
            max = x;    // set to max
        }
        if(x <= min){   // if integer is less thn previous min
            min = x;    // set to min
        }
    }
    cout << max << " - " << min << "= ";
    int diff = max - min;
    return diff;         // return difference
}