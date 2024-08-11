#include <iostream>
#include <cmath>
using namespace std;
int ReadNum()
{
    int Num;
    cout << "Enter the Number: ";
    cin >> Num;
    return Num;
}
void PowerFrom2to4(int Num)
{
    for (int i = 2; i <= 4; i++)
    {
        cout << pow(Num, i) << endl;
    }
}
int main()
{
    PowerFrom2to4(ReadNum());
    return 0;
}