#include <iostream>
using namespace std;
struct stinfo
{
    int Age;
    bool HasDriverLicense;
};

stinfo Readinfo()
{
    stinfo Info;
    cout << "Enter your Age: ";
    cin >> Info.Age;
    cout << "Are Do you have a driving license? (true = 1 or false = 0):\n";
    cin >> Info.HasDriverLicense;
    return Info;
}
bool IsAccepted(stinfo Info)
{
    return (Info.Age >= 21 && Info.HasDriverLicense);
}
void printInfo(stinfo Info)
{

    if (IsAccepted(Info))
    {
        cout << "Hired" << endl;
    }
    else
    {
        cout << "Rejected" << endl;
    }
}
int main()
{
    cout << "========== Hire a Driver Case1 ==========\n";
    printInfo(Readinfo());
    return 0;
}