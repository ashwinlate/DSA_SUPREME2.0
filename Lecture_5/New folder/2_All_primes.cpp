#include<iostream>
using namespace std;
 
//Check All primes from 1 to N

bool checkPrime(int n){
    int i = 2;
    for(i=2; i<n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
int main(){  
    int n;
    cin>>n;

    for(int i=2; i<=n; i++){
        bool isiPrime = checkPrime(i);
        if(isiPrime){
            cout<<i<<" ";
        }
    }
       
}