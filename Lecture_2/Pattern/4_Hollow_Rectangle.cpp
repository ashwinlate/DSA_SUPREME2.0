#include <iostream>
using namespace std;

int main()
{
    // Outer loop -> row
    for (int row = 0; row < 4; row = row + 1)
    {
        // Inner loop -> col
        for (int col = 0; col < 6; col = col + 1)
        {
            if (row == 0 || row == 3)
            {
                cout << "* ";
            }
            else
            {
                if (col == 0 || col == 5)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout<<endl;
    }
}