#include <iostream>
#include <cmath>
using namespace std;
struct StrTaskDuration
{
    short NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};
int ReadPositiveNumber(string Message)
{
    int Num;
    do
    {
        cout << Message;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}
StrTaskDuration SecondsToTaskDuration(int TotalSeconds)
{
    StrTaskDuration TaskDuration;
    const short SecondsPerDays = 24 * 60 * 60;
    const short SecondsPerHours = 60 * 60;
    const short SecondsPerMinutes = 60;

    short Remainder = 0;

    TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsPerDays);
    Remainder = TotalSeconds % SecondsPerDays;
    TaskDuration.NumberOfHours = floor(Remainder / SecondsPerHours);
    Remainder %= SecondsPerHours;
    TaskDuration.NumberOfMinutes = floor(Remainder / SecondsPerMinutes);
    Remainder %= SecondsPerMinutes;
    TaskDuration.NumberOfSeconds = Remainder;
    return TaskDuration;
}
void PrintTaskDurationDetails(StrTaskDuration TaskDuration)
{
    cout << endl;
    cout << TaskDuration.NumberOfDays << " : " << TaskDuration.NumberOfHours << " : " << TaskDuration.NumberOfMinutes << " : "
         << TaskDuration.NumberOfSeconds << endl;
}
int main()
{
    int TotalSeconds = ReadPositiveNumber("Enter Total Seconds: ");
    PrintTaskDurationDetails(SecondsToTaskDuration(TotalSeconds));
    return 0;
}