#include <iostream>
using namespace std;
int ReadYourAge()
{
    int Age;
    cout << "Enter Your Age Between 18 and 45: ";
    cin >> Age;
    return Age;
}
bool ValidateNumberInRange(int Number, int From, int To)
{
    return (Number >= From && Number <= To);
}
int ReadUntilAgeBetween(int From, int To)
{
    int Age = 0;

    do
    {
        Age = ReadYourAge();
    } while (!ValidateNumberInRange(Age, From, To));

    return Age;
}
void PrintResult(int Age)
{
    if (ValidateNumberInRange(Age, 18, 45))
    {
        cout << "Valid Age" << endl;
    }
    else
    {
        cout << "Invalid Age" << endl;
    }
}
int main()
{
    PrintResult(ReadUntilAgeBetween(18, 45));
    return 0;
}