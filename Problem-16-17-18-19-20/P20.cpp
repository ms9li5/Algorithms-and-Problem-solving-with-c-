/*
    Problem:
    Write a program to calculate Circle area inscribed in a square, then print it on the screen.
    The use should enter:
    -A
 */
#include <iostream>
#include <cmath>
using namespace std;
void ReadNumUnkonwn(float &A)
{
    cout << "Enter the Number : ";
    cin >> A;
}
float CalculateCircleAreaInscribesInASquare(float A)
{
    const float PI = 3.14;
    float Area = (PI * pow(A, 2)) / 4;
    return Area;
}
void PrintResult(float Area)
{
    cout << "The Circle Area is: " << Area << endl;
}
int main()
{
    float A;
    ReadNumUnkonwn(A);
    PrintResult(CalculateCircleAreaInscribesInASquare(A));
    return 0;
}