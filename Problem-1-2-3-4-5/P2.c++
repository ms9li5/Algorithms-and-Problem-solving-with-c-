#include <iostream>
using namespace std;
string ReadName()
{
    string Name;
    cout << "Enter your name: ";
    getline(cin, Name);
    cout << "=======================\n";
    return Name;
}
void PrintName(string Name)
{
    cout << "Your Name is : " << Name << endl;
}
int main()
{
    PrintName(ReadName());
    return 0;
}