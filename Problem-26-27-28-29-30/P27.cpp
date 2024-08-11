// Print Number From N to 1
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
    for (int i = Num; i >= 1; i--)
    {
        cout << i << endl;
    }
}
int main()
{
    PrintNum(ReadInputNum());
    return 0;
}