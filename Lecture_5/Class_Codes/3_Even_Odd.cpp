#include <iostream>
using namespace std;

void checkEvenOdd(int n)
{
    if (n % 2 == 0)
    {
        cout << "Even Number";
    }
    else
    {
        cout << "Odd Number";
    }
}

int main()
{
    checkEvenOdd(24);
}