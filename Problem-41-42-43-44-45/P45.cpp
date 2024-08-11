#include <iostream>
using namespace std;
enum enMonthOfYear
{
    Jan = 1,
    Feb = 2,
    Mar = 3,
    Apr = 4,
    May = 5,
    Jun = 6,
    Jul = 7,
    Aug = 8,
    Sep = 9,
    Oct = 10,
    Nov = 11,
    Dec = 12
};
int ReadNumberInRange(string Message, int From, int To)
{
    int Num;
    do
    {
        cout << Message;
        cin >> Num;
    } while (Num < From || Num > To);
    return Num;
}
enMonthOfYear ReadDayOfWeek()
{
    return (enMonthOfYear)ReadNumberInRange("Enter the Number of Day: ", 1, 12);
}
string GetMonthOfYear(enMonthOfYear Month)
{
    switch (Month)
    {
    case enMonthOfYear::Jan:
        return "January";
    case enMonthOfYear::Feb:
        return "February";
    case enMonthOfYear::Mar:
        return "March";
    case enMonthOfYear::Apr:
        return "April";
    case enMonthOfYear::May:
        return "May";
    case enMonthOfYear::Jun:
        return "June";
    case enMonthOfYear::Jul:
        return "July";
    case enMonthOfYear::Aug:
        return "August";
    case enMonthOfYear::Oct:
        return "October";
    case enMonthOfYear::Nov:
        return "November";
    case enMonthOfYear::Dec:
        return "December";
    }
}
int main()
{
    cout << GetMonthOfYear(ReadDayOfWeek()) << endl;
    return 0;
}