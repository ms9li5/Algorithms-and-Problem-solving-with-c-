#include <iostream>
using namespace std;
float ReadPositiveNumber(string Message)
{
    int Num;
    do
    {
        cout << Message;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}
float CalcDaysNumber(float Num)
{
    return Num / 24;
}
float CalcWeeksNumber(float Num)
{
    return Num / 7;
}
void PrintResult(float Num)
{
    cout << "Days: " << CalcDaysNumber(Num) << endl;
    cout << "Weeks: " << CalcWeeksNumber(CalcDaysNumber(Num)) << endl;
}
int main()
{
    float NumberOfHours = ReadPositiveNumber("Enter Number of Hours: ");
    float NumberOfDays = CalcDaysNumber(NumberOfHours);
    float NumberOfWeeks = CalcWeeksNumber(NumberOfDays);

    cout << "Days: " << NumberOfDays << endl;
    cout << "Weeks: " << NumberOfWeeks << endl;
    return 0;
}