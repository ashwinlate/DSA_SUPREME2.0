#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;
        if (i == 3)
            break;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "Hello Jee" << endl;
        continue;
        cout<<"Kaise ho saare"<<endl;

        //Prints Hello Jee -> 5 times
    }

    for (int i = 0; i < 5; i++)
    {
        continue;  
        cout << "Hello Jee" << endl;
        cout<<"Kaise ho saare"<<endl;

        //Kuch bhi Print nahi hoga
    }

    for (int i = 0; i<5; i++){
        cout<<"Hello Jee"<<endl;
        cout<<"Kaise ho saare"<<endl;
        continue;

        //prints Hello Jee and Kaise ho saare -> 5 times 
    }
}