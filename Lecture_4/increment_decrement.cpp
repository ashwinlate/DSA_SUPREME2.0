#include <iostream>
using namespace std;

int main()
{
    //Increment Operator
    int a = 21;
    cout << ++a << endl; // a -> 22

    cout << a++ << endl; // a -> 22

    cout << a;  // a -> 23

    // int a = 10;
    cout << (++a) * 10 << endl; // a->11  110

    cout << (a++) * 10 << endl; // a -> 11 110

    cout << a; // a -> 11

    // H.W.
    int a = 10; 

    cout<<((++a)*(a++));
}