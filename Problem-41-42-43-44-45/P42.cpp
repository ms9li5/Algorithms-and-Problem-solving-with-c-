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
StrTaskDuration ReadTaskDuration()
{
    StrTaskDuration TaskDuration;
    TaskDuration.NumberOfDays = ReadPositiveNumber("Enter the Number of Days: ");
    TaskDuration.NumberOfHours = ReadPositiveNumber("Enter the Number of Hours: ");
    TaskDuration.NumberOfMinutes = ReadPositiveNumber("Enter the Number of Minutes: ");
    TaskDuration.NumberOfSeconds = ReadPositiveNumber("Enter the Number of Seconds: ");
    return TaskDuration;
}
float CalcTotalSecond(StrTaskDuration TaskDuration)
{
    float DurationInSeconds = 0.00;
    DurationInSeconds = TaskDuration.NumberOfDays * 24 * pow(60, 2);
    DurationInSeconds += TaskDuration.NumberOfHours * pow(60, 2);
    DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
    DurationInSeconds += TaskDuration.NumberOfSeconds;
    return DurationInSeconds;
}
void PrintResult(float DurationInSeconds)
{
    cout << "Task Duration In Seconds is: " << DurationInSeconds << endl;
}
int main()
{
    PrintResult(CalcTotalSecond(ReadTaskDuration()));
    return 0;
}