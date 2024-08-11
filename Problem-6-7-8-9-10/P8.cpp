#include <iostream>
using namespace std;
enum enPssFail
{
    Pass = 1,
    Fail = 2
};
int ReadNumber()
{
    int Num;
    cout << "Enter the Number: ";
    cin >> Num;
    return Num;
}
enPssFail checkMark(int Mark)
{
    if (Mark >= 50)
    {
        return enPssFail::Pass;
    }
    else
    {
        return enPssFail::Fail;
    }
}
void PrintNum(int Num)
{
    if (checkMark(Num) == enPssFail::Pass)
    {
        cout << "your Mark is: " << "Pass";
    }
    else
    {
        cout << "your Mark is: " << "Fail";
    }
}
int main()
{
    PrintNum(ReadNumber());
    return 0;
}