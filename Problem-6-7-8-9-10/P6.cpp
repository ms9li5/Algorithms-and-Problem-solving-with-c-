#include <iostream>
using namespace std;
struct StInfo
{
    string FirstName;
    string LastName;
};
StInfo RaedName()
{
    StInfo info;
    cout << "Enter the First Name: ";
    cin >> info.FirstName;
    cout << "Enter the Last Name: ";
    cin >> info.LastName;
    return info;
}
string GetFullName(StInfo Info)
{
    string FullName;
    FullName = Info.FirstName + " " + Info.LastName;
    return FullName;
}
void PrintInfo(string FullName)
{
    cout << "Your full name is: " << FullName << endl;
}
int main()
{
    PrintInfo(GetFullName(RaedName()));
    return 0;
}