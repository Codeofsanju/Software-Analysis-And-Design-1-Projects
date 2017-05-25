//Author: Sanjeev Sharma
//Print diamond of size N, where N must be a positive odd number
#include <iostream>
using namespace std;

void printDiamond();

int main(){
    printDiamond();
    return 0;
}

void printDiamond(){
    int size = -1;
    while(size % 2 == 0 || size < 0){
        cout << "Please, enter a positive odd number: ";
        cin >> size;
    }

    while(size % 2 != 0 && size > 0){
        for(int i = 1; i < size; i++){
            for(int j = size; j > i; j--){
                cout << " ";
            }
            for(int k = 0; k < i; k++){
                cout << " *";
            }
            cout << endl;
        }
        for(int i = size; i > 0; i--){
            for(int j = size; j > i; j--){
                cout << " ";
            }
            for(int k = 0; k<i; k++){
                cout<< " *";
            }
            cout << endl;
        }
        break;
    }
}