#include<iostream>
using namespace std;
class Solution {
public:
    void swapTwoNumbers(int &a, int &b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
};
int main()
{
    int num1, num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    Solution sol;
    sol.swapTwoNumbers(num1, num2);
    cout<<"After swapping: "<<num1<<" "<<num2<<endl;
    return 0;
}