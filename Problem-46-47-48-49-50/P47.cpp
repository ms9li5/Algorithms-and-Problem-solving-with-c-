#include <iostream>
using namespace std;
struct StrSettleLoan
{
    int LoanAmount, MonthlyInstallment;
};
StrSettleLoan ReadSettleLoan()
{
    StrSettleLoan SettleLoan;
    cout << "Enter the Loan Amount: ";
    cin >> SettleLoan.LoanAmount;
    cout << "Enter the Monthly Installment: ";
    cin >> SettleLoan.MonthlyInstallment;
    return SettleLoan;
}
float CalcTotalMonths(StrSettleLoan SettelLoan)
{
    return SettelLoan.LoanAmount / SettelLoan.MonthlyInstallment;
}
void PrintResult(float TotalMonths)
{
    cout << TotalMonths << " Months\n";
}
int main()
{
    PrintResult(CalcTotalMonths(ReadSettleLoan()));
    return 0;
}