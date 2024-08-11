#include <iostream>
#include <cmath>
using namespace std;
void Read3Num(float &A, float &B, float &C)
{
    cout << "Enter Triangle Side A: ";
    cin >> A;
    cout << "Enter Triangle Base B: ";
    cin >> B;
    cout << "Enter Triangle Side C: ";
    cin >> C;
}
float CalcCircleAreaCircleDsecribedAroundAnArbitraryTriangle(float A, float B, float C)
{
    const float PI = 3.14;
    float P = (A + B + C) / 2;
    float Area = PI * pow(((A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)))), 2);
    return Area;
}
void PrintResult(float Area)
{
    cout << "The Area is: " << Area << endl;
}
int main()
{
    float A, B, C;
    Read3Num(A, B, C);
    PrintResult(CalcCircleAreaCircleDsecribedAroundAnArbitraryTriangle(A, B, C));
    return 0;
}