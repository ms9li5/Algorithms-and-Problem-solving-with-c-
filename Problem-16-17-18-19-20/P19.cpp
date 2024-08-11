/*
    Problem:
    Write a program to calculate circle area through diameter, then print it on the screen.
    The use should enter:
    -D
 */
#include <iostream>
#include <cmath>
using namespace std;
void ReadNumUnkonwn(float &D)
{
    cout << "Enter the Number : ";
    cin >> D;
}
float CircleAreaThroughDiameter(float D)
{
    const float PI = 3.14;
    float Area = (PI * pow(D, 2)) / 4;
    return Area;
}
void PrintResult(float Area)
{
    cout << "The Circle Area is: " << Area << endl;
}
int main()
{
    float D;
    ReadNumUnkonwn(D);
    PrintResult(CircleAreaThroughDiameter(D));
    return 0;
}
