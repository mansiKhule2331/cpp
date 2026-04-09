#include<iostream>
using namespace std;
class Solution {
    public:
    int sumOfSquares(int n)
    {
        return n*(n+1)*(2*n+1)/6;
    }
};
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    Solution sol;
    int sum = sol.sumOfSquares(num);
    cout<<"Sum of squares of first "<<num<<" natural numbers is: "<<sum<<endl;
    return 0;
}