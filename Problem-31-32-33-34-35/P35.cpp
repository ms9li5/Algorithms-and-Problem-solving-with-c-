#include <iostream>
using namespace std;
struct StPiggyBankContent
{
    int Pennies, Nickle, Dimes, Quarters, Dollar;
};

StPiggyBankContent ReadPiggyBankContent()
{
    StPiggyBankContent PiggyBankContent;
    cout
        << "Enter the Number of Pennies: ";
    cin >> PiggyBankContent.Pennies;
    cout << "Enter the Number of Nickle: ";
    cin >> PiggyBankContent.Nickle;
    cout << "Enter the Number of Dimes: ";
    cin >> PiggyBankContent.Dimes;
    cout << "Enter the Number of Dimes: ";
    cin >> PiggyBankContent.Dimes;
    cout << "Enter the Number of Quarters: ";
    cin >> PiggyBankContent.Quarters;
    cout << "Enter the Number od Dollar: ";
    cin >> PiggyBankContent.Dollar;
    return PiggyBankContent;
}
int CalcTotalPennies(StPiggyBankContent PiggyBankContent)
{
    int TotalPinnes = 0;
    TotalPinnes = PiggyBankContent.Pennies * 1 + PiggyBankContent.Nickle * 5 + PiggyBankContent.Dimes * 10 +
                  PiggyBankContent.Quarters * 25 + PiggyBankContent.Dollar * 100;

    return TotalPinnes;
}
int main()
{
    int TotalPinnes = CalcTotalPennies(ReadPiggyBankContent());
    cout << "\nTotal Pinnes = " << TotalPinnes << endl;
    cout << "\nTotal Dollar = " << (float)TotalPinnes / 100 << endl;
    return 0;
}