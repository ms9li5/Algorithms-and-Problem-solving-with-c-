#include <iostream>
using namespace std;
enum enDayOfWeek
{
    Sun = 1,
    Mon = 2,
    Tues = 3,
    Wend = 4,
    Thurs = 5,
    Fri = 6,
    Sat = 7
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
enDayOfWeek ReadDayOfWeek()
{
    return (enDayOfWeek)ReadNumberInRange("Enter the Number of Day: ", 1, 7);
}
string GetDayofWeek(enDayOfWeek Day)
{
    switch (Day)
    {
    case enDayOfWeek::Sun:
        return "It's Sunday";
    case enDayOfWeek::Mon:
        return "It's Monday";
    case enDayOfWeek::Tues:
        return "It's Tuesday";
    case enDayOfWeek::Wend:
        return "It's Wednesday:";
    case enDayOfWeek::Thurs:
        return "It's Thursday";
    case enDayOfWeek::Fri:
        return "It's Friday";
    case enDayOfWeek::Sat:
        return "It's Saturday";
    default:
        return "Wrong Day";
    }
}
int main()
{
    cout << GetDayofWeek(ReadDayOfWeek()) << endl;
    return 0;
}