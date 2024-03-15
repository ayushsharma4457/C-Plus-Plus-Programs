#include <iostream>
using namespace std;

int main()
{
    int a = 54;
    float b = 4.54;
    char c = 'a';
    double d = 5.23654;
    bool e = true;
    wchar_t f = L'A';

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
    cout << sizeof(f);

    return 0;
}