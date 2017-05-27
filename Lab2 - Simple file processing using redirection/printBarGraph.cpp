//Author: Sanjeev Sharma
//Task: This program reads the file redirected to standard input. The file contains positive integers. After reading the file print a bar chart, such that each integer N read from the file is show as a group of N vertical bar symbols |.
//Purpose: Practice taking input from file using file redirection
 #include <iostream>
using namespace std;

void printBarGraph();
 
int main(){
    printBarGraph();
    return 0;
}

void printBarGraph(){
    int x;
    while(cin >> x){
        for(int i = 0; i < x; ++i){
            cout << "|";
        }
        cout << endl;
    }
}