#include <iostream>
using namespace std;
void Read3Num(int &num1, int &num2, int &num3)
{
    cout << "Enter the num1: ";
    cin >> num1;
    cout << "Enter the num2: ";
    cin >> num2;
    cout << "Enter the num3: ";
    cin >> num3;
}
int CalcSum(int Num1, int Num2, int Num3)
{
    int sum = Num1 + Num2 + Num3;
    return sum;
}
void PrintResult(int total)
{
    cout << "The Sum is: " << total << endl;
}
int main()
{
    int num1, num2, num3;
    Read3Num(num1, num2, num3);
    PrintResult(CalcSum(num1, num2, num3));
    return 0;
}