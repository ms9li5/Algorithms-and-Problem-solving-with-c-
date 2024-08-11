#include <iostream>
using namespace std;
void Read2Num(int &Num1, int &Num2)
{
    cout << "Enter the Nubmer 1: ";
    cin >> Num1;
    cout << "Enter the Number 2: ";
    cin >> Num2;
}
int MaxOf2Num(int Num1, int Num2)
{
    if (Num1 > Num2)
    {
        return Num1;
    }
    else
    {
        return Num2;
    }
}
void PrintReuslt(int Max)
{
    cout << "The Max is: " << Max << endl;
}
int main()
{
    int Num1, Num2;
    Read2Num(Num1, Num2);
    PrintReuslt(MaxOf2Num(Num1, Num2));
    return 0;
}