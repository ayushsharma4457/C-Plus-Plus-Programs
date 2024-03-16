#include <iostream>
#define PI 3.14159
using namespace std;

int main()
{
    cout.width(10);
    cout.precision(4);
    cout.fill('#');
    cout << PI;

    return 0;
}