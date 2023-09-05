#include <iostream>
using namespace std;

int main()
{
    // outer loop
    for (int row = 0; row < 3; row = row + 1)
    {
        // inner loop
        for (int col = 0; col < 6; col = col + 1)
        {
            cout << "* ";
        }
        cout << endl;
    }
}