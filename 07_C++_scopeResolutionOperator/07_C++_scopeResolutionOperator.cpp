#include <iostream>
using namespace std;

int m = 10;

int main()
{
    int m = 20;
    int n = 30;
    {
        int m = 40;
        cout << "Inner Block: " << endl;
        cout << "m = " << m << endl;
        cout << "m = " << ::m << endl;
    }
    cout << "Outer Block: " << endl;
    cout << "m = " << m << endl;
    cout << "m = " << ::m << endl;

    return 0;
}