#include <iostream>
using namespace std;
void PrintAllLetter()
{
    for (int i = 65; i <= 90; i++)
    {
        cout << char(i) << endl;
    }
}
int main()
{
    PrintAllLetter();
    return 0;
}