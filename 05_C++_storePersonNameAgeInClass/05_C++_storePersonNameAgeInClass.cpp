#include <iostream>
using namespace std;

class person
{
private:
    char name[30];
    int age;

public:
    void getdata(void);
    void display(void);
};

void person ::getdata(void)
{
    cout << "Enter The Name: ";
    cin >> name;

    cout << "Enter The Age: ";
    cin >> age;
}

void person ::display(void)
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

int main()
{
    person p;

    p.getdata();
    p.display();

    return 0;
}