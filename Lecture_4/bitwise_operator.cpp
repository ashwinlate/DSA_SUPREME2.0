#include <iostream>
using namespace std;

int main()
{
    // Bitwise AND (&) Operator
    int a = 5;
    int b = 10;

    cout << (a & b);

    int a = 15;
    int b = 20;

    cout << (a & b);

    // Bitwise OR (|) Operator
    int a = 15;
    int b = 20;

    cout << (a | b);

    // Bitwise Negation(~) Operator

    int num = 1;
    cout << (~num) << endl;

    int num = 4;
    cout << (~num) << endl;

    int num = 0;
    cout << (~num) << endl;

    // Bitwise XOR(^) Operator

    int a = 10;
    int b = 5;

    cout << (a ^ b) << endl;

    int a = 30;
    int b = 25;

    cout << (a ^ b) << endl;

    int a = 5;
    int b = -5;

    cout << (a ^ b) << endl;

    int a = 7;
    int b = -7;

    cout << (a ^ b) << endl;

    int a = 8;
    int b = -6;

    cout << (a ^ b) << endl;

    // Left Shift Operator -> (<<)

    int a = 7;
    int ans = (a << 3);
    cout << ans << endl;

    int a = 47;
    int ans = (a << 3);
    cout << ans << endl;

    int a = -25;
    int ans = (a << 4);
    cout << ans << endl;

    // Bitwise Right Shift Operator -> (>>)

    int a = 15;
    int ans = (15 >> 4);
    cout << ans << endl;

    int a = -100;
    int ans = (a >> 3);
    cout << ans << endl;

    unsigned int n = -100;
    int ans = (n >> 4);
    cout << ans << endl; // print positive large number

    int n = 100;
    cout << (n << -4); // Gives warning and print garbage value
}