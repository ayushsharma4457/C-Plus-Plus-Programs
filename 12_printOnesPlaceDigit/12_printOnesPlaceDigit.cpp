#include <iostream>
using namespace std;

int main()
{
    int digit;
    cout << "Enter The Digit: ";
    cin >> digit;

    cout << "Unit Place: " << digit % 10;

    return 0;
}