//Author: Sanjeev Sharma
// This program asks the user to input 2 positive integers. Then it should print a rectangle of '.', but now every 5th row and every 5th column should be printed with the hash '#' character instead of '.'.
#include <iostream>
using namespace std;

void printGraph(int width, int height);

int main(){
    cout << "Please, enter the width = ";
    int width;
    cin >> width;
    cout << "Please, enter the height = ";
    int height;
    cin >> height;

    printGraph(width, height);
    return 0;
}

void printGraph(int width, int height){
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            if(i % 5 == 0 || j % 5 == 0){
                cout << " # ";
            }
            else{
                cout << " . "; 
            }
        }
    cout << endl;
    }
    cout << "\n\n";
}