#include <iostream>
using namespace std;
float ReadTotalBill()
{
    int TotalBill = 0;
    do
    {
        cout << "Enter the Total Bill: ";
        cin >> TotalBill;
    } while (TotalBill <= 0);
    return TotalBill;
}
float ReadCashPaid()
{
    float CashPaid = 0;
    do
    {
        cout << "Enter the Total Bill: ";
        cin >> CashPaid;
    } while (CashPaid <= 0);
    return CashPaid;
}
float CalculateRemainder(float CashPaid, float TotalBill)
{
    return CashPaid - TotalBill;
}
void PrintReuslt(float Remainder)
{
    cout << "The Remainder is: " << Remainder << endl;
}
int main()
{
    PrintReuslt(CalculateRemainder(ReadCashPaid(), ReadTotalBill()));
    return 0;
}