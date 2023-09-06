#include <iostream>
using namespace std;

int areaOfTriangle(int base, int height)
{
    int area = base * height;
    return area;
}
int main()
{
    cout<<"Area of Triangle is : "<<areaOfTriangle(30,30);
}