#include <iostream>
using namespace std;
int ReadAge()
{
    int Age;
    cout << "Enter your Age: ";
    cin >> Age;
    return Age;
}
bool ValidateNumberInRange(int Number, int From, int To)
{
    return (Number >= From && Number <= To);
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
    PrintResult(ReadAge());
    return 0;
}