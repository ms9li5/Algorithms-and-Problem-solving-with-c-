#include <iostream>
#include <cmath>
using namespace std;
void ReadNum(float &A, float &H)
{
    cout << "Enter the Number 1: ";
    cin >> A;
    cout << "Enter the Number 2: ";
    cin >> H;
}
float CalculateTriangleArea(float A, float H)
{
    return (A / 2) * H;
}
void PrintResult(float Area)
{
    cout << "Triangle Area is: " << Area << endl;
}
int main()
{
    float Num1, Num2;
    ReadNum(Num1, Num2);
    PrintResult(CalculateTriangleArea(Num1, Num2));
    return 0;
}