#include <iostream>
#include<stdio.h>
using namespace std;

int main(){

    char ch;
    cin >> ch;

    if(ch >= 'a' && ch <= 'z'){
        cout << "Lower Case" << endl;
    }else if(ch >= 'A' && ch <= 'Z'){
        cout << "Upper Case" << endl;
    }else{
        cout << "Numeric Value" << endl;
    }
}