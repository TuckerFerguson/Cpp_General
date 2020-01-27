/*
@author Tucker Ferguson
1/24/2020

Utilizing try,catch,throw for exception handling

Input is divided by 5 then output, however if 0 is entered

It will throw an exception '99' user entered 0

It will throw an exception "too small" if n < 100

*/

#include <iostream>
using namespace std;

void sizeException(int x){
    try{
        if(x == 0){
            throw 22;
        }
    }
    catch(int x){
        cout << "error code: " << x << " No even numbers!";
    }
}

int main(){
    int x;
    int dividen;
    cout << "Enter even number or '0' to get custom error message: ";
    cin >> x;
    dividen = x%2;
    sizeException(dividen);
    try{
        if(x == 0){
            throw 99;
        }else if(dividen !=0 ){
        cout << x << " is an odd number!" << endl;
        }
    }
    catch(int x){
        cout << "error code: " << x << " User entered 0\n";
    }
    return 0;
}