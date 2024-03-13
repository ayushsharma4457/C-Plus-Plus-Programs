#include<iostream>
using namespace std;

int main()
{
    int n = 10;
    int &num = n;

    cout<<&num<<endl;

    return 0;
}