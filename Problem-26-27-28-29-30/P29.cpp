// Print Sum Even Number From 1 to N
#include <iostream>
using namespace std;
enum enOddOrEven
{
    Odd = 1,
    Even = 2
};
int ReadNumber()
{
    int Num;
    cout << "Enter the Number: ";
    cin >> Num;
    return Num;
}
enOddOrEven checkOddOrEven(int Num)
{
    if (Num % 2 != 0)
    {
        return enOddOrEven::Odd;
    }
    else
    {
        return enOddOrEven::Even;
    }
}
int CalcSumEvenNumber1toN(int Num)
{
    int sum = 0;
    for (int i = 0; i <= Num; i++)
    {
        if (checkOddOrEven(i) == enOddOrEven::Even)
        {
            sum += i;
        }
    }
    return sum;
}
void PrintResult(int Sum)
{
    cout << "The Sum is: " << Sum << endl;
}
int main()
{
    PrintResult(CalcSumEvenNumber1toN(ReadNumber()));
    return 0;
}