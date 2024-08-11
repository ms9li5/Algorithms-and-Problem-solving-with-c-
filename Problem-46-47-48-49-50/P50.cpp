#include <iostream>
using namespace std;
int ReadPinNum()
{
    int Num, count = 0;
    do
    {
        cout << "Enter the PIN code: ";
        cin >> Num;
        if (Num != 1234)
        {
            cout << "Wrong PIN" << endl;
        }
        count++;
        if (count == 3)
        {
            return 3;
        }

    } while (Num != 1234);
    return Num;
}
void PrintResult(int Num)
{
    if (Num == 3)
    {
        cout << "Your PIN a lock" << endl;
    }
    else
    {
        int Balance = 7500;
        cout << "Your Balance is: " << Balance << endl;
    }
}
int main()
{
    PrintResult(ReadPinNum());
    return 0;
}