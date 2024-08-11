#include <iostream>
using namespace std;
enum enNumberType
{
    Odd = 1,
    Even = 2
};
int ReadNumber()
{
    int Number;
    cout << "Enter thr Number: ";
    cin >> Number;
    return Number;
}
enNumberType checkNumberType(int Num)
{

    if (Num % 2 == 0)
    {
        return enNumberType::Even;
    }
    else
    {
        return enNumberType::Odd;
    }
}
void printNumberType(int NumberType)
{
    if (NumberType == enNumberType::Even)
    {
        cout << "\nNumber is Even\n";
    }
    else
    {
        cout << "\nNumber is Odd\n";
    }
}
int main()
{
    printNumberType(checkNumberType(ReadNumber()));
    return 0;
}