// 37 Sum Until -99
#include <iostream>
#include <string>
using namespace std;
float ReadNumber(string Message)
{
    float Num;
    cout << Message << endl;
    cin >> Num;
    return Num;
}
float SumNumbers()
{
    int Sum = 0, Number = 0, Count = 1;
    do
    {
        Number = ReadNumber("Enter the Number " + to_string(Count));
        if (Number == -99)
        {
            break;
        }
        Sum += Number;
        Count++;
    } while (Number != -99);
    return Sum;
}
int main()
{
    cout << "The Result" << SumNumbers() << endl;
    return 0;
}