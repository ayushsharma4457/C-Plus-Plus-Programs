#include <iostream>
using namespace std;

class temp
{
    int farh, cel;

public:
    void getdata(void);
    void display(void);
};

void temp ::getdata(void)
{
    cout << "Enter The Temp In Farhenheit: ";
    cin >> farh;
}

void temp ::display(void)
{
    cout << "Celsius: " << (farh - 32) * 5 / 9;
}

int main()
{
    temp t;

    t.getdata();
    t.display();

    return 0;
}