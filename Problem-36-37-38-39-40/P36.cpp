// Simple Calc
#include <iostream>
using namespace std;
enum enOperationType
{
    Add = '+',
    Subtarct = '-',
    Multiply = '*',
    Divied = '/'
};
struct StNumberforCalc
{
    float a, b;
};
StNumberforCalc ReadNumber()
{
    StNumberforCalc NumberForCalc;
    cout << "Enter the First Number: ";
    cin >> NumberForCalc.a;
    cout << "Enter the Seconds Number: ";
    cin >> NumberForCalc.b;
    return NumberForCalc;
}
enOperationType ReadOPType()
{
    char OT = '+';
    cout << "Enter the Operation Type(+ , - , * , /): ";
    cin >> OT;
    return (enOperationType)OT;
}
float SimpleCalc(enOperationType OPType, StNumberforCalc NumberforCalc)
{
    switch (OPType)
    {
    case enOperationType::Add:
        return NumberforCalc.a + NumberforCalc.b;
    case enOperationType::Subtarct:
        return NumberforCalc.a - NumberforCalc.b;
    case enOperationType::Multiply:
        return NumberforCalc.a * NumberforCalc.b;
    case enOperationType::Divied:
        return NumberforCalc.a / NumberforCalc.b;
    default:
        return NumberforCalc.a + NumberforCalc.b;
        break;
    }
}
void PrintResult(float Result)
{
    cout << "The Resulting: " << Result << endl;
}
int main()
{
    PrintResult(SimpleCalc(ReadOPType(), ReadNumber()));
    return 0;
}