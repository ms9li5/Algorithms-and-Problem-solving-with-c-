#include <iostream>
#include <cstdlib>
using namespace std;
int ReadPinNum()
{
    int Num;
    do
    {
        cout << "Enter the PIN code: ";
        cin >> Num;
        if (Num != 1234)
        {
            cout << "Wrong PIN" << endl;
        }
    } while (Num != 1234);
    return Num;
}
void PrintATMPIN(int Num)
{
    int Balance = 7500;
    cout << "Your Balance is: " << Balance << endl;
}
int main()
{
    PrintATMPIN(ReadPinNum());
    return 0;
}