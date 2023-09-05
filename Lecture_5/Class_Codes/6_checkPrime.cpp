#include <iostream>
using namespace std;


//return true -> if N is a prime no.
//return false -> if N is not prime no.
bool checkPrime(int n)
{

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            // remainder = 0 -> perfectly divisible
            // not a prime number
            return false;
        }
    }
    // yaha par main keh sakta hu
    // k [ 2,3,4,5 ---- n-1 ], koi bhi N ko perfectly divide
    // nahi kar paya hoga

    return true;
}
int main()
{
    bool prime = checkPrime(3);

    if (prime)
    {
        cout << "Its a prime number " << endl;
    }
    else
    {
        cout << "Its not a prime number" << endl;
    }
}
