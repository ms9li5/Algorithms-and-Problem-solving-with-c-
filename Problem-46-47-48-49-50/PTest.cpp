#include <iostream>
using namespace std;
string ReadPinCode()
{
    string PinCode;
    cout << "Please Enter PIN code: ";
    cin >> PinCode;
    return PinCode;
}
bool Login()
{
    string PinCode;
    PinCode = ReadPinCode();
    int Count = 3;
    do
    {
        Count--;
        if (PinCode == "1234")
        {
            return 1;
        }
        else
        {
            system("color 4F");
            cout << "\nWrong PIN, you have " << Count << endl;
        }
    } while (Count >= 1 && PinCode != "1234");
    return 0;
}
int main()
{
    if (Login)
    {
        system("color 2F");
        cout << "Your Account Balance is: " << 7500 << endl;
    }
    else
    {
        cout << "Your Card blocked call the bank for help." << endl;
    }
    return 0;
}