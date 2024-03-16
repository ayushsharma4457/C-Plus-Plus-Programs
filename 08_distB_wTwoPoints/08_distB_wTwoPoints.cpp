#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x1, x2, y1, y2, dist;
    cout << "Enter The X-Coordinate: ";
    cin >> x1 >> x2;

    cout << "Enter The Y-Coordinate: ";
    cin >> y1 >> y2;

    dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    cout << dist;

    return 0;
}