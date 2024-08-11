#include <iostream>
#include <cmath>
using namespace std;
enum enPrimeNotPrime
{
    Prim = 1,
    NotPrime = 2
};
float ReadPositiveNumber()
{
    float Num = 0;
    do
    {
        cout << "Enter the Positive Number: ";
        cin >> Num;
    } while (Num <= 0);
    return Num;
}
enPrimeNotPrime checkPrime(int Num)
{
    int M = round(Num / 2);
    for (int i = 2; i <= M; i++)
    {
        if (Num % i == 0)
        {
            return enPrimeNotPrime::NotPrime;
        }
    }
    return enPrimeNotPrime::Prim;
}
void PrintNumberType(int Num)
{
    switch (checkPrime(Num))
    {
    case enPrimeNotPrime::Prim:
        cout << "The Number is Prime" << endl;
        break;
    case enPrimeNotPrime::NotPrime:
        cout << "The Number is NotPrime" << endl;
        break;
    }
}
int main()
{
    PrintNumberType(ReadPositiveNumber());
    return 0;
}