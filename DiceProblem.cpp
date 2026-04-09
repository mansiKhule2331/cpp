#include<iostream>
using namespace std;
class Dice {
public:
    int rollDice()
    {
        return rand()%6 + 1;
    }
};
int main()
{
    Dice dice;
    cout<<"Rolling the dice: "<<dice.rollDice()<<endl;
    return 0;
}