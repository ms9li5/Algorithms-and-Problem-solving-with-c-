/*
    Problem:
    Write a program to calculate circle area then print it on the screen.
    The use should enter:
        r
*/
#include <iostream>
#include <cmath>
using namespace std;
void ReadNumUnkonwn(float &R)
{
    cout << "Enter the Number : ";
    cin >> R;
}
float CalculateCircleArea(float R)
{
    const float PI = 3.14;
    float Area = PI * pow(R, 2);
    return Area;
}
void PrintResult(float Area)
{
    cout << "The Circle Area is: " << Area << endl;
}
int main()
{
    float R;
    ReadNumUnkonwn(R);
    PrintResult(CalculateCircleArea(R));
    return 0;
}