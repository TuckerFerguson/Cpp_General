/*
@author Tucker Ferguson
1/24/2020

Using templates with empty parameters to create class specializations

*/

#include <iostream>
using namespace std;

template <class T>
class myClass{
    public:
        myClass(T x){
            cout << x << " is a integer! \n";
        }
    };
    
template < >
class myClass<char>{
    public:
        myClass(char x){
            cout << x << " is a character! \n";
        }
};

template < >
class myClass<double>{
    public:
        myClass(double x){
            cout << x << " is a double! \n";
        }
};


int main(){
    myClass<int> obj1(25);
    
    myClass<char> obj2('A');
    
    myClass<double> obj3(13.37);
  
    return 0;
}