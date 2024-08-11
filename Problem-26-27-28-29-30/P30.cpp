// Factorial N
#include <iostream>
using namespace std;
int ReadNumber()
{
    int Num;
    do
    {
        cout << "Enter the Positive Number: ";
        cin >> Num;
    } while (Num < 0);
    return Num;
}
int CalcFactorialOfN(int Num)
{
    int Fact = 1;
    for (int i = Num; i >= 1; i--)
    {
        Fact *= i;
    }
    return Fact;
}
void PrintResult(int Fact)
{
    cout << "Factorial is: " << Fact << endl;
}
int main()
{
    PrintResult(CalcFactorialOfN(ReadNumber()));
    return 0;
}