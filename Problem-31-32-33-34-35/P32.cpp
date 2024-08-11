#include <iostream>
#include <cmath>
using namespace std;
int ReadNumber()
{
    int Num;
    cout << "Enter the Number: ";
    cin >> Num;
    return Num;
}
int ReadPower()
{
    int Pow;
    cout << "Enter the Power: ";
    cin >> Pow;
    return Pow;
}
int PowerOfM(int Num, int M)
{
    if (M == 0)
    {
        return 1;
    }
    int P = 1;
    for (int i = 1; i <= M; i++)
    {
        P *= Num;
    }
    return P;
}
int main()
{

    cout << "\nResult: " << PowerOfM(ReadNumber(), ReadPower()) << endl;
    return 0;
}