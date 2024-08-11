#include <iostream>
using namespace std;
float ReadTotlaSales()
{
    int TotalSales;
    cout << "Enter the Number: ";
    cin >> TotalSales;
    return TotalSales;
}
float GetComissionPercentage(float TotalSales)
{

    if (TotalSales >= 1000000)
    {
        return 0.01;
    }
    else if (TotalSales >= 5000000 && TotalSales < 1000000)
    {
        return 0.02;
    }
    else if (TotalSales >= 100000 && TotalSales < 5000000)
    {
        return 0.03;
    }
    else if (TotalSales >= 50000 && TotalSales < 100000)
    {
        return 0.05;
    }
    else
    {
        return 0.00;
    }
}
float CalcTotalComission(int TotalSales)
{
    return GetComissionPercentage(TotalSales) * TotalSales;
}
int main()
{
    float TotalSales = ReadTotlaSales();
    CalcTotalComission(GetComissionPercentage(TotalSales));
    return 0;
}