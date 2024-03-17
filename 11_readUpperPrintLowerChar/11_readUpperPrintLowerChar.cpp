#include <iostream>
using namespace std;

int main()
{
    char character;

    cout << "Enter The Upper Char: ";
    cin >> character;

    character = int(character) + 32;
    cout << "Lower Charcter: " << character;

    return 0;
}