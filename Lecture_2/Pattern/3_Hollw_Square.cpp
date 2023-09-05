#include <iostream>
using namespace std;

int main()
{
    // Outer loop -> rows
    for (int row = 0; row < 5; row = row + 1)
    {
        // Inner loop -> cols
        for (int col = 0; col < 5; col = col + 1)
        {
            // zeroth row or last row, then print star
            if (row == 0 || row == 4)
            {
                cout << "* ";
            }
            else
            {
                // zeroth col or last col, then print star
                if (col == 0 || col == 4)
                {
                    cout << "* ";
                }
                // print space
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}