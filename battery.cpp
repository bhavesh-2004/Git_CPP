#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter Your Phone Battery Percentage:";
    cin>>a;
    
    if(a<=20)
        {
      cout<<"Please Charge Your Phone ";  
        }
    else
        {
            cout<<"Battery Of Your Phone Is Good , Don't charge your phone ";
        }
    return 0;
}