#include <iostream>
using namespace std;

float circle_Area(float radius)
{
    float area = 3.14 * radius * radius;
    return area;
}

int main()
{
    float radius;
    cout << "Enter radius of Circle: ";
    cin >> radius;
    float area = circle_Area(radius);
    cout << "Area of Circle is: " << area << endl;
}