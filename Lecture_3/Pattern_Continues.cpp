#include <iostream>
using namespace std;

int main()
{
    // Full Pyramid
    //  int n;
    //  cin >> n;

    // // outer loop
    // for (int row = 0; row < n; row = row + 1)
    // {
    //     // space
    //     for (int col = 0; col < n - row - 1; col = col + 1)
    //     {
    //         cout << " ";
    //     }

    //     // stars
    //     for (int col = 0; col < row + 1; col = col + 1)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // Inverted Half Pyramid

    // int n;
    // cin >> n;

    // for (int row = 0; row < n; row = row + 1)
    // {
    //     // space
    //     for (int col = 0; col < row; col = col + 1)
    //     {
    //         cout << " ";
    //     }
    //     // stars
    //     for (int col=0; col < n - row; col = col + 1)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // Diamond Pattern

    // int num;
    // cout << "Enter rows: ";
    // cin >> num;

    // int n = num / 2;

    // // outer loop
    // for (int row = 0; row < n; row = row + 1)
    // {
    //     // space
    //     for (int col = 0; col < n - row - 1; col = col + 1)
    //     {
    //         cout << " ";
    //     }

    //     // stars
    //     for (int col = 0; col < row + 1; col = col + 1)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // for (int row = 0; row < n; row = row + 1)
    // {
    //     // space
    //     for (int col = 0; col < row; col = col + 1)
    //     {
    //         cout << " ";
    //     }
    //     // stars
    //     for (int col = 0; col < n - row; col = col + 1)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    //    Hollow Pyramid
    // int n;
    // cout << "Enter rows: ";
    // cin >> n;

    // for (int row = 0; row < n; row = row + 1)
    // {
    //     // space
    //     for (int col = 0; col < n - row - 1; col = col + 1)
    //     {
    //         cout << "  ";
    //     }
    //     // stars
    //     for (int col = 0; col < row + 1; col = col + 1)
    //     {
    //         // print star for first and last col
    //         if (col == 0 || col == row + 1 - 1)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             // for every col between first and last
    //             // column, print space
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }

    // Inverted Hollow Pyramid

    int n;
    cin >> n;

    for (int row = 0; row < n; row = row + 1)
    {
        // spaces
        for (int col = 0; col < row; col = col + 1)
        {
            cout << " ";
        }

        // stars
        int totalCol = n - row;
        for (int col = 0; col < totalCol; col = col + 1)
        {
            // if first or last col
            if (col == 0 || col == totalCol - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << " ";
            }
        }
        cout<<endl;
    }
}