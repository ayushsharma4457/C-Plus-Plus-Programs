#include <iostream>
#include <math.h>
#define PI 3.14
using namespace std;

int main()
{
    float radius, area;

    cout << "ENter The Radius: ";
    cin >> radius;

    area = PI * pow(radius, 2);

    cout << "Area: " << area;

    return 0;
}