#include <iostream>
using namespace std;

void printMaximum(int num1, int num2, int num3)
{
    if (num1 >= num2 && num1 >= num3)
    {
        cout << "Maximum is: " << num1 << endl;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        cout << "Maximum is: " << num2 << endl;
    }
    else
    {
        cout << "Maximum is: " << num3 << endl;
    }
}
// Using built-in functions

int printMaxium(int n1, int n2, int n3)
{
    int ans1 = max(n1, n2);
    int finalAns = max(ans1, n3);
    return finalAns;
}
// }
int main()
{
    int maxiumum = printMaxium(44, 75, 66);
    cout << "Maximum is: " << maxiumum;
    // printMaximum(33, 33, 21);
}