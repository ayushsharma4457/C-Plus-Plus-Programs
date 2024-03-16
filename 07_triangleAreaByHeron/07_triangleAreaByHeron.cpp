#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int s, a, b, c, area;
    cout << "Enter The Three Side OF Triangle: ";
    cin >> a >> b >> c;

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "Area: " << area;

    return 0;
}