#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    
    // int  fmarks[] = {45,67,55,99};
    // cout<<"marks"<<endl;
    // cout<<setw(2)<<fmarks[0]<<endl;
    // cout<<setw(2)<<fmarks[1]<<endl;
    // cout<<setw(2)<<fmarks[2]<<endl;
    // cout<<setw(2)<<fmarks[3]<<endl;
    // fmarks[2]=90;
    // // int marks[3];
    // // marks [0]=45;
    // // marks [1]=45;
    // // marks [2]=45;
    // // cout<<"marks"<<endl;
    // // cout<<marks[0]<<endl;
    // // cout<<marks[1]<<endl;
    // // cout<<marks[2]<<endl;
    
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<i<<fmarks[i]<<endl;
    // }
    
   
    
    
    // for (int i = 0; i < n; i++)
    // {   
    //     cout<<array[i];
        
    // }
    //     int max = arr[0];
    //     int min = arr[0];
    
    // for (int i = 0; i < n; i++)
    // {   
    //    if (arr[i]>max){
    //         max=arr[i];
    //    }

    //    if (arr[i]<min){
    //         min=arr[i];
    //    }
        
    // }

    // cout<<max<<endl;
    // cout<<min<<endl;
    
    int arr [n] ;
    int sum =0 ;
    cout<<"values\n";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
       
    }

    for (int i = 0; i < n; i++)
    {
       sum = sum+arr[i];
       
    }
    cout<<"sum is "<<sum;

    for (int i = n-1; i >=0; i--)
    {
         cout<<arr[i];
    }
    




    return 0;
}