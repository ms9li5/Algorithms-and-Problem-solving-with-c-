#include <iostream>
using namespace std;
int ReadNumberInRange(int From, int To)
{
    int Gard;
    do
    {
        cout << "Enter the Gard between 0 and 100: " << endl;
        cin >> Gard;
    } while (Gard < From || Gard > To);
    return Gard;
}
char checktheGard(int Gard)
{
    if (Gard >= 90)
    {
        return 'A';
    }
    else if (Gard >= 80)
    {
        return 'B';
    }
    else if (Gard >= 70)
    {
        return 'C';
    }
    else if (Gard >= 60)
    {
        return 'D';
    }
    else if (Gard >= 50)
    {
        return 'E';
    }
    else
    {
        return 'F';
    }
}
void PrintResult(char Gard)
{
    cout << Gard << endl;
}
int main()
{
    PrintResult(checktheGard(ReadNumberInRange(0, 100)));
    return 0;
}