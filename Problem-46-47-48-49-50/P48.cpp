#include <iostream>
using namespace std;
struct StrMonthlyInstallmentAmount
{
    int LoanAmount, HowManyMonth;
};
StrMonthlyInstallmentAmount ReadMonthlyInstallment()
{
    StrMonthlyInstallmentAmount SettleLoan;
    cout << "Enter the Loan Amount: ";
    cin >> SettleLoan.LoanAmount;
    cout << "How Many month do you want: ";
    cin >> SettleLoan.HowManyMonth;
    return SettleLoan;
}
float CalcTheMonthlyInstallment(StrMonthlyInstallmentAmount SettleLoan)
{
    return SettleLoan.LoanAmount / SettleLoan.HowManyMonth;
}
void PrintResult(float MonthlyInstallment)
{
    cout << MonthlyInstallment << endl;
}
int main()
{
    PrintResult(CalcTheMonthlyInstallment(ReadMonthlyInstallment()));
    return 0;
}