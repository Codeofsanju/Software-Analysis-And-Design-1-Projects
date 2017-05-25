//Author: Sanjeev Sharma
// Program that asks the user to input two positive integers for width and height, then prints a rectangle.

#include <iostream>
using namespace std;

void printRectangle(int width, int height);

int main () {
    cout << "Please, enter the width = ";
    int width;
    cin >> width;
    cout << "Please, enter the height = ";
    int height;
    cin >> height;

    printRectangle(width, height);
    return 0;
}

void printRectangle(int width, int height){
    for(int j = 0; j < height; j++){ 
        cout << endl;   
        for(int i = 0; i < width; i++){
            cout << " . ";
            } 
        }
    cout << "\n\n";
}