#include<iostream>
using namespace std;
class Solution{
    public:
    int sunOfNaturalNum(int n)
    {
        return n*(n+1)/2;
    }
}
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    Solution sol;
    int sum = sol.sunOfNaturalNum(num);
    cout<<"Sum of first "<<num<<" natural numbers is: "<<sum<<endl;
    return 0;
}