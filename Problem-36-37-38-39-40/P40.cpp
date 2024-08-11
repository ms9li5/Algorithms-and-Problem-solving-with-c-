#include <iostream>
using namespace std;
float ReadPositiveNumber(string Message)
{
    float Num = 0;
    do
    {
        cout << Message;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}
float CalcTotalValue(int Num)
{
    return Num * 1.1;
}
float CalcTotalBill(float Num)
{
    return CalcTotalValue(Num) * 1.16;
}
void PrintResult(float Result)
{
    cout << "The Result: " << Result << endl;
}
int main()
{
    int BillValue = ReadPositiveNumber("Enter the Bill Value: ");
    PrintResult(CalcTotalBill(BillValue));
    return 0;
}