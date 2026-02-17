#include <iostream>
using namespace std;
int main()
{
    // int a,b ;
    // cout<<"Enter the number 1:"<<endl;
    // cin>>a;
    // cout<<"Enter the number 2:"<<endl;
    // cin>>b;
    // if(a>b)
    // {
    //     cout<<a<<"  is greater than"<<b;
    // }
    // else
    // {
    //     cout<<a<<" is smaller than"<<b;
    // }
    // return 0;
    int a,b;
    cout<<"Enter the  two number:";
    cin>>a>>b;
    (a>b)?  cout<<a<<"is greater":
    (a<b)? cout<<a<<"is smaller":
            cout<<"Both are equal";
            return 0;
            
}