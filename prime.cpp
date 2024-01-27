#include<iostream>

using namespace std ;
int main()
{
    int a;
    int count = 0;
    cout<<"enter the value ";
    cin>>a;
    for (int i = 2; i < a; i++)
    {
        if (a%i==0)
        {
           count++;
        }
    }
    if (count==0){
        cout<<"no. is prime";  
    }else{
        cout<<"no. is composite";
    }
        
    return 0;
}
