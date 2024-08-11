#include <iostream>
using namespace std;
int ReadNumber()
{
    int Number;
    cout << "Enter the Number: ";
    cin >> Number;
    return Number;
}
float HalfNumber(int Num)
{
    return (float)Num / 2;
}
void printNumber(int Num)
{
    string Result = "Half of " + to_string(Num) + " is " + to_string(HalfNumber(Num));
    cout << Result << endl;
}
int main()
{
    printNumber(ReadNumber());
    return 0;
}