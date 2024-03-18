#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter The First Number: ";
    cin >> num1;

    cout << "Enter The First Number: ";
    cin >> num2;

    if (num1 > num2)
    {
        cout << num1 << " is greater than " << num2;
    }

    else
    {
        cout << num2 << " is greater than " << num1;
    }

    return 0;
}