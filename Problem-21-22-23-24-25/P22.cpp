#include <iostream>
#include <cmath>
using namespace std;
void ReadTriangleData(float &A, float &B)
{
    cout << "Enter the Number of Isosceles: ";
    cin >> A;
    cout << "Enter the Number of Base: ";
    cin >> B;
}
float CalcCicleAreaInscribedByIsoscelesTriangle(float A, float B)
{
    const float PI = 3.14;
    float Area = ((PI * pow(B, 2)) / 4) * ((2 * A - B) / (2 * A + B));
    return Area;
}
void PrintResult(float Area)
{
    cout << "circle area Inscribed in an Isosceles Triangle: " << Area << endl;
}
int main()
{
    float A, B;
    ReadTriangleData(A, B);
    PrintResult(CalcCicleAreaInscribedByIsoscelesTriangle(A, B));
    return 0;
}