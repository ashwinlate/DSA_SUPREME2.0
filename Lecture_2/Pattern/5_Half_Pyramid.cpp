#include <iostream>
using namespace std;

int main()
{
    // Outer loop
    for (int row = 0; row < 5; row = row + 1)
    {
        // Inner loop
        for (int col = 0; col < row + 1; col = col + 1)
        {
            cout << "* ";
        }
        cout << endl;
    }
}