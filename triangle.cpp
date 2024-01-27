#include <iostream>
using namespace std ;
int main()
{
   int side1;
   int side2;
   int side3;
   cout<<"enter your sides value"<<endl;
   cin>>side1>>side2>>side3 ;

if (side1==side2 && side2==side3)
{   cout<<"your traiangle is equilateral"<<endl ;
}
else if(side1==side2 || side2==side3 || side3==side1)
{
    cout<<"your triangle is isoceles"<<endl;
}
 else 
 {  cout<<"tedha medha";
   
 }  
     
    
    return 0;
}    



