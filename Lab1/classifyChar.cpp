// Author: Sanjeev Sharma
/*
Task: This program asks the user to input a character. The character should be classified into one of the following groups:

a. Parenthesis, '(' or ')'
b. Square bracket, '[' or ']'
c. Curly brace, '{' or '}'
d. Plus, '+'
e. Minus, '-'
f. Digit, '0' - '9'
g. Other

Then the program prints out name of the character hroup to which the input character belongs.
Purpose: Practice switch cases and Enumerations (enum) types 
*/

#include <iostream>
#include <ctype.h>
using namespace std;

enum Token {PAREN, BRACKET, CURLEY, PLUS, MINUS, DIGIT, OTHER};

void classifyChar(char a);

int main(){
    cout << "Please enter a character: ";
    char a;
    cin >> a;

    classifyChar(a);
}

void classifyChar(char a){
    Token t = PAREN;

// This switch will set enum Token to the right type of char
    switch(a){
        // case for parenthesis
        case '(':
        case ')':
            t = PAREN;
            break;
        // case for brackets
        case '[':
        case ']':
            t = BRACKET;
            break;
        // case for curley braces
        case '{':
        case '}':
            t = CURLEY;
            break;
        // case for addition sign
        case '+':
            t = PLUS;
            break;
        // case for minus sign
        case '-':
            t = MINUS;
            break;
        // default case that handles both digits (using isDigit), and other
        default:
            if(isdigit(a)){
                t = DIGIT;
            }
            else{
                t = OTHER;
            }
            break;
    }

// This switch will then take what the previous case set enum Token as and print the the type of character the user entered is 
    switch(t){
        case PAREN:
            cout << "Parenthesis\n";
            break;
        
        case BRACKET:
            cout << "Bracket\n";
            break;
        
        case CURLEY:
            cout << "Curley Brace\n";
            break;
        
        case PLUS:
            cout << "Plus\n";
            break;
        
        case MINUS:
            cout << "Minus\n";
            break;
        
        case DIGIT:
            cout << "Digit\n";
            break;
        
        case OTHER:
            cout << "Other\n";
            break;
    }
}