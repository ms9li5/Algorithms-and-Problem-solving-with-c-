#include <iostream>
#include <cmath>
using namespace std;
float ReadCircumference()
{
    float L;
    cout << "Enter the Circumference: ";
    cin >> L;
    return L;
}
float CalcCircleAreaByCircumference(float L)
{
    const float PI = 3.14;
    float Area = pow(L, 2) / (4 * PI);
    return Area;
}
void PrintResult(float Area)
{
    cout << "circle area along the circumference is " << Area << endl;
}
int main()
{
    PrintResult(CalcCircleAreaByCircumference(ReadCircumference()));
    return 0;
}