#include <iostream>
using namespace std;
struct stinfo
{
    int Age;
    bool HasDriverLicense;
    bool HasRecommendation;
};
stinfo Readinfo()
{
    stinfo Info;
    cout << "Enter your Age: ";
    cin >> Info.Age;
    cout << "Are Do you have a driving license? (true = 1 or false = 0):\n";
    cin >> Info.HasDriverLicense;
    cout << "Are do you Have a Recommendation\n";
    cin >> Info.HasRecommendation;
    return Info;
}
bool IsAccepted(stinfo Info)
{
    if (Info.HasRecommendation)
    {
        return true;
    }
    else
    {
        return (Info.Age >= 21 && Info.HasDriverLicense);
    }
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
    cout << "========== Hire a Driver Case2 ==========\n";
    printInfo(Readinfo());
    return 0;
}