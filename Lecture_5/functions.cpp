#include <iostream>
using namespace std;

// First Function
void printMsg()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Sundar ko Sundari Pasand Hai...." << endl;
    }
}
// Function Declaration
// void printLine();

// Write a function to print sum of 3
//  void printSum(int a, int b, int c)
//  {
//      int answer = a + b + c;
//      cout << "Sum is: " << answer << endl;
//  }

// Write a function to return sum of 3
//  int printSum(int a, int b, int c)
//  {
//      int ans = a + b + c;
//      return ans;
//  }

void messagePrint()
{
    // cout << "Msg 1" << endl;
    // return;
    // cout << "Msg 2" << endl;

    cout << "Msg 1" << endl;
    cout << "Msg 2" << endl;
    return;
}
int main()
{

    messagePrint();
    // int sum = printSum(4, 4, 5);
    // cout << "Sum is: " << sum << endl;

    // cout << "Sum is: " << printSum(3, 4, 5);

    // printSum(2, 5, 4);

    // Function Call
    // printMsg();

    // Function call
    // printLine();
}
// This is not good practice
// Below the main() function is defined
// void printLine()
// {
//     cout << "Hi...." << endl;
// }