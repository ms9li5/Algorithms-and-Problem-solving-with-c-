#include <iostream>
using namespace std;
void Read2Num(int &Num1, int &Num2)
{
    cout << "Enter the Nubmer 1: ";
    cin >> Num1;
    cout << "Enter the Number 2: ";
    cin >> Num2;
}
void SwapNumber(int &Num1, int &Num2)
{
    int Temp;
    Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;
}
void PrintReuslt(int Num1, int Num2)
{
    cout << "*******************\n";
    cout << "Number1: " << Num1 << endl;
    cout << "Number2: " << Num2 << endl;
    cout << "*******************\n";
}
int main()
{
    int Num1, Num2;
    Read2Num(Num1, Num2);
    PrintReuslt(Num1, Num2);
    SwapNumber(Num1, Num2);
    PrintReuslt(Num1, Num2);
    return 0;
}