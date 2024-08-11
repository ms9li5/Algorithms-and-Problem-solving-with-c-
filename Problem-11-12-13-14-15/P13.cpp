#include <iostream>
using namespace std;
void Read3Num(int &Num1, int &Num2, int &Num3)
{
    cout << "Enter the Nubmer 1: ";
    cin >> Num1;
    cout << "Enter the Number 2: ";
    cin >> Num2;
    cout << "Enter the Number 3: ";
    cin >> Num3;
}
int MaxOf3Num(int Num1, int Num2, int Num3)
{
    if (Num1 > Num2 && Num1 > Num3)
    {
        return Num1;
    }
    else if (Num2 > Num1 && Num2 > Num3)
    {
        return Num2;
    }
    else
    {
        return Num3;
    }
}
void PrintReuslt(int Max)
{
    cout << "The Max is: " << Max << endl;
}
int main()
{
    int Num1, Num2, Num3;
    Read3Num(Num1, Num2, Num3);
    PrintReuslt(MaxOf3Num(Num1, Num2, Num3));
    return 0;
}
