#include <iostream>
using namespace std;

void findEvenSumUptoN(int n)
{
    int sum = 0;
    for (int i = 2; i <= n; i = i + 2)
    {
        sum = sum + i;
    }
    cout << "Final Sum is: " << sum << endl;
}
int main()
{
    findEvenSumUptoN(11);
}