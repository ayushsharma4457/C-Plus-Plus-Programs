#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float items, value, discount, tax;
    cout << "Enter The Items: ";
    cin >> items;
    cout << "Enter The Value: ";
    cin >> value;
    cout << "Enter The Discount: ";
    cin >> discount;
    cout << "Enter The Tax: ";
    cin >> tax;

    float amount, total_discount, discounted_total, total_tax, total_amount;

    amount = value * items;
    total_discount = (value * items) * discount / 100;
    discounted_total = amount - total_discount;
    total_tax = (discounted_total * tax) / 100;
    total_amount = discounted_total + total_tax;

    cout << "*******************BILL*******************" << endl;

    cout << setw(20) << "Quantity Sold: " << setw(20) << items << endl;
    cout << setw(20) << "Price Per Item: " << setw(20) << value << endl;
    cout << setw(40) << "---------------" << endl;
    cout << setw(20) << "Amount: " << setw(20) << amount << endl;
    cout << setw(20) << "Discount: " << setw(20) << total_discount << endl;
    cout << setw(20) << "Discounted Total: " << setw(20) << discounted_total << endl;
    cout << setw(20) << "Tax: " << setw(20) << total_tax << endl;
    cout << setw(40) << "---------------" << endl;
    cout << setw(20) << "Total Amount To Be Paid: " << total_amount << endl;

    return 0;
}