#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Converting all Flowcharts into CPP Programs

    // 1.Print Sum of a & b
    //  int a = 10, b = 14;
    //  int sum = a + b;

    // cout<<sum<<endl;

    // 2.Average of A,B,C
    //  int a = 15, b = 25, c = 35;
    //  int avg = (a + b + c)/3 ;
    //  cout<<avg<<endl;

    // 3.Print Twice of A
    //  int a = a;
    //  int num = 2*a ;
    //  cout<<num<<endl;

    // 4.Adding two numbers by taking input
    //  int first_number, second_number;
    //  cout<<"Enter two numbers";
    //  cin >> first_number >>second_number;
    //  int sum = first_number + second_number;
    //  cout<<sum<<endl;

    // 5.Find Area of Square
    // int a = 24;
    // int area = a * a;

    // cout << "Area of triangle is: " << area << endl;

    // 6.Calculate overall percentage of marks
    //  int a,b,c,d,e,total,per;

    //  cout<<"Enter five subject marks: \n";
    //  cin >>a >>b >>c >>d >>e;

    //  total = a+b+c+d+e;
    //  per = total / 5;

    //  cout<<"Total Marks = "<<total;
    //  cout<<"\nMarks in Percentage = "<< per<<"%";

    // 7.Check number is even or odd

    // int num;
    // cout<<"Enter the Numbers: "<<endl;
    // cin >> num ;

    // if(num%2==0){
    //     cout<<"Number is Even"<<endl;
    // }
    // else{
    //     cout<<"Number is Odd"<<endl;
    // }

    // 8.Check Number is +ve, -ve, and zero

    // int num;
    // cout<<"Enter the Numbers: "<<endl;
    // cin >> num ;

    // if(num>0){
    //     cout<<"Number is Positive"<<endl;
    // }
    // else if (num<0)
    // {
    //    cout<<"Number is Negative"<<endl;
    // }
    // else{
    //     cout<<"Number is Zero"<<endl;
    // }

    // 9.Student Grade and Marks

    // int marks;
    // cout << "Enter the Marks: " << endl;
    // cin >> marks;

    // if (marks >= 90)
    // {
    //     cout << "Grade A";
    // }
    // else if (marks >= 70)
    // {
    //     cout << "Grade B";
    // }
    // else if (marks >= 50)
    // {
    //     cout << "Grade C";
    // }
    // else
    // {
    //     cout << "Grade D";
    // }

    // 10.Print your name 5 times

    // for (int i = 1; i <= 5; i = i + 1)
    // {
    //     cout << "Ashwin " << i << endl;
    // }

    // 11.Print Counting from 1 to n

    // int n;
    // cout << "Enter the n: " << endl;
    // cin >> n;

    // for (int i = 1; i <= n; i = i + 1)
    // {
    //     cout << i << endl;
    // }

    // 12.Multiple times input and output lena and print karo
    // Remaining
    // int n=20;
    // int i=1;
    // // cout << "Enter the n: " << endl;
    // // cin >> n;

    // if (i <= n)
    // {
    //     cout << i << endl;
    //     i = i + 1;
    // }
    // else
    // {
    //     cout << "Stop" << endl;
    // }

    // 13.Multiply N numbers from user
    // Remining
    // int n;
    // int ans;
    // int a;
    // cout << "Enter the n: " << endl;
    // cin >> n;
    // for (int i = 1; i < n; i=i+1)
    // {
    //    if(i<=n){

    //    }
    // }

    // 14.Print 1 to N, but only even numbers

    // int n;
    // cout << "Enter the n: " << endl;
    // cin >> n;
    // int i = 1;
    // for (; i <= n; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         cout << i << endl;
    //     }
    // }

    // Multiply two numbers taking input from user

    // int a, b;

    // cout << "Enter the value of a: " << endl;
    // cin >> a;
    // cout << "Enter the value of b: " << endl;
    // cin >> b;

    // cout << a * b << endl;

    // Find the perimeter of triangle

    // int side_a, base, side_b;

    // cout << "Enter the value of side a: " << endl;
    // cin >> side_a;
    // cout << "Enter the value of base: " << endl;
    // cin >> base;
    // cout << "Enter the value of side b: " << endl;
    // cin >> side_b;

    // int peri_of_triangle = side_a + base + side_b;

    // cout <<"Perimeter of Triangle is: "<<peri_of_triangle<<endl;

    // Find the simple interest

    // float p,t,r; //p = principal amount, t = time, r = rate of interest

    // cout<<"Enter Principal Amount: "<<endl;
    // cin>>p;
    // cout<<"Enter time: "<<endl;
    // cin>>t;
    // cout<<"Enter rate_of_interest: "<<endl;
    // cin>>r;

    // float simple_interest = ( p * r * t )/ 100;

    // cout<<"Simple Interest is: "<<simple_interest << endl;

    // Find the Compund Interest

    // double principal, rate, time; // Principal amount, rate of interest, time

    // cout << "Enter principal amount: " << endl;
    // cin >> principal;
    // cout << "Enter rate of interest: " << endl;
    // cin >> rate;
    // cout << "Enter time: " << endl;
    // cin >> time;

    // // Calculate compound interest
    // double amount = principal * (pow((1 + rate / 100), time));
    // cout << amount << endl;

    // double CI = amount - principal;

    // cout << "Compound Interest is: " << CI << endl;

    // Print Counting from n to 1

    // int n, counting = 0;
    // cout << "Enter the number: " << endl;
    // cin >> n;
    // for (int i = n; i >= 1; i = i - 1)
    // {
    //     cout << i << endl;
    // }

    // Find the factorial of number using for loop
    // int n, fac;
    // cout << "\nEnter number to find: ";
    // cin >> n;
    // fac = 1;
    // for (; n >= 1; n = n - 1)
    //     fac = fac * n;
    // cout << "\nfactorial = " <<fac;

    // Factorial number using else-if

    // int n, fac = 1;
    // cout << "\nEnter Number: ";
    // cin >> n;
    // if (n == 0)
    //     cout << "\nFactorial = 1";
    // else if (n < 0)
    //     cout << "\nFactorial of negative number is not possible";
    // else
    // {
    //     for (; n >= 1; n = n - 1)
    //     {
    //         fac = fac * n;

    //     }
    //      cout << "\nfactorial = " << fac;
    // }

    // Check if number is prime or not

    // int i, count = 0, j;
    // cout << "\nEnter Number to Check: ";
    // cin >> i;
    // for (j = 1; j <= i; j++)
    // {
    //     if (i % j == 0)
    //         count++;
    // }
    // if (count == 2)
    //     cout << "\nPrime Number";
    // else
    //     cout << "\nNot Prime Number";

    // Check valid triangle or not

    // int a, b, c;

    // cout << "Enter side a = ";
    // cin >> a;

    // cout << "Enter side b = ";
    // cin >> b;

    // cout << "Enter side c = ";
    // cin >> c;

    // if (a + b > c && a + c > b && b + c > a)
    // {
    //     cout << "valid triangle" << endl;
    // }
    // else
    // {
    //     cout << "Invalid triangle" << endl;
    // }

    // Print max of three numbers

    // int a, b, c;
    // cout << "Enter number a = " ;
    // cin >> a;
    // cout << "Enter number b = " ;
    // cin >> b;
    // cout << "Enter number c = " ;
    // cin >> c;

    // if (a > b && a > c)
    // {
    //     cout << " Maximun number is a" << endl;
    // }
    // else if (b > a && b > c)
    // {
    //     cout << " Maxiumum number is b" << endl;
    // }
    // else
    // {
    //     cout << " Maxiumum number is c" << endl;
    // }
}