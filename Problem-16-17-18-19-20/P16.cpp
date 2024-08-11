#include <iostream>
#include <cmath>
using namespace std;
void ReadNum(float &A, float &B)
{
    cout << "Enter the Number 1: ";
    cin >> A;
    cout << "Enter the Number 2: ";
    cin >> B;
}
float CalculateAreaThroughDiagonalArea(float A, float B)
{
    return A * sqrt(pow(B, 2) - pow(A, 2));
}
void PrintResult(float Area)
{
    cout << "Rectangle area Through Diagonal and side Area is: " << Area << endl;
}
int main()
{
    float Num1, Num2;
    ReadNum(Num1, Num2);
    PrintResult(CalculateAreaThroughDiagonalArea(Num1, Num2));
    return 0;
}