#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout << "ENter First Number: ";
    cin >> num1;
    cout << "Enter The Second Number: ";
    cin >> num2;

    cout << "Before Swap: " << num1 << num2 << endl;

    int temp = num2;
    num2 = num1;
    num1 = temp;

    cout << "After Swap: " << num1 << num2;

    return 0;
}