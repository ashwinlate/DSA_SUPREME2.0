#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;
    }
    // cout << "or bhai i kya value h teri" << i << endl;  // erroe 'i' was not declared in this scope

    if (true)
    {
        int a = 25;
        cout << a << endl;
    }

    // cout<<a<<endl;  //'a' was not declared in this scope
   
   int a = 101;
    if (true)
    {
        cout << "inside if number 1" << endl;
        // int a = 202;
        if (true)
        {
            cout << "inside if number 2" << endl;
            // int a = 303;
            cout << a << endl;
        }
    }
}