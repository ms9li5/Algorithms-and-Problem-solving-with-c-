#include <iostream>
using namespace std;
void Read2Num(float &Num1, float &Num2)
{
    cout << "Enter the Nubmer 1: ";
    cin >> Num1;
    cout << "Enter the Number 2: ";
    cin >> Num2;
}
float CalculateRectangleArea(float a, float b)
{
    return a * b;
}
void PrintResult(int Area)
{
    cout << "The Area is: " << Area << endl;
}
int main()
{
    float Num1, Num2;
    Read2Num(Num1, Num2);
    PrintResult(CalculateRectangleArea(Num1, Num2));
    return 0;
}