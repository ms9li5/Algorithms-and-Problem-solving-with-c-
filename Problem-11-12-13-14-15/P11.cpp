#include <iostream>
using namespace std;
enum enPassFail
{
    PASS = 1,
    Fail = 2
};
void Read3Num(int &Num1, int &Num2, int &Num3)
{
    cout << "Enter the Number 1: ";
    cin >> Num1;
    cout << "Enter the Number 2: ";
    cin >> Num2;
    cout << "Enter the Number 3: ";
    cin >> Num3;
}
int CalcSum(int Num1, int Num2, int Num3)
{
    return Num1 + Num2 + Num3;
}
float CalcAverage(int Num1, int Num2, int Num3)
{
    return (float)CalcSum(Num1, Num2, Num3) / 3;
}
enPassFail CheckAverage(float Average)
{
    if (Average >= 50)
    {
        return enPassFail::PASS;
    }
    else
    {
        return enPassFail::Fail;
    }
}
void PrintResult(float Average)
{
    cout << "The Average is: " << Average << endl;
    if (CheckAverage(Average) == enPassFail::PASS)
        cout << "Passed" << endl;
    else
        cout << "Failed" << endl;
}
int main()
{
    int Num1, Num2, Num3;
    cout << "Average Pass Fail\n";
    Read3Num(Num1, Num2, Num3);
    PrintResult(CalcAverage(Num1, Num2, Num3));
    return 0;
}