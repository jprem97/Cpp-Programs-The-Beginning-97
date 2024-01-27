#include <iostream>
using namespace std;

int main() {
    
    int a =9 ;
    int* b = &a;
    // address of operatoor >> &(memory storage address )
    cout<<b<<endl;
    cout<<&a<<endl;

    // deference operator  >> * (tells value)
    cout<<*b<<endl;
    cout<<a<<endl;

    int** c=&b;
    cout<<c<<endl;
    cout<<**c<<endl;

    int***d=&c;
    cout<<d;
    return 0;
}
