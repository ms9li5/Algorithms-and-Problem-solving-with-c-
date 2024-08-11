// Print Number From 1 to N
#include <iostream>
using namespace std;
int ReadInputNum()
{
    int Num;
    cout << "Enter the Number: ";
    cin >> Num;
    return Num;
}
void PrintNum(int Num)
{
    for (int i = 1; i <= Num; i++)
    {
        cout << i << endl;
    }
}
int main()
{
    PrintNum(ReadInputNum());
    return 0;
}