#include<iostream>
using namespace std;
vector generateMultiplicationTable(int n)
{
    vector<int> table;
    for(int i=1; i<=10; i++)
    {
        table.push_back(n*i);
    }
    return table;
}
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    vector<int> multiplicationTable = generateMultiplicationTable(num);
    cout<<"Multiplication Table of "<<num<<":"<<endl;
    for(int i=0; i<multiplicationTable.size(); i++)
    {
        cout<<num<<" x "<<i+1<<" = "<<multiplicationTable[i]<<endl;
    }
    return 0;
}