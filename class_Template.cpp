/*
@author Tucker Ferguson
1/24/2020

Using templates for classes in C++

*/
#include <iostream>
using namespace std;

template <class T>
class myClass{
    private:
        T a,b;
    public:
        myClass(T x, T y):a(x),b(y){}
        T isSquare();
};

template <class T>
T myClass <T> :: isSquare(){
    if((b = a*a)){
        cout << a << " is the sqrt of " << b << endl;
    }
    else{
        cout << "these values do not have a square root relation\n";
    }
    return 0;
}

int main(){
    myClass <int>working(7,49);
    working.isSquare();
    
    return 0;
}