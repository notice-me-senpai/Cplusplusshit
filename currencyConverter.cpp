#include <iostream>
using namespace std;

int main()
{
    int money, choice;
    double dollar = 0.013310;
    double pound = 0.010032;
    double euro = 0.011787;
    float res;

    cout << "Enter your money: ";
    cin >> money;
    cout << "1. Rupee to Dollar\n";
    cout << "2. Rupee to Pound\n ";
    cout << "3. Rupee to Euro\n ";
    cout << "4. Dollar to Rupee\n ";
    cout << "5. Pound to Rupee\n ";
    cout << "6. Euro to Rupee\n ";

    cout << "Enter your choice: ";
    cin >> choice;

       // cout << "and if you wanna change dollars to rupees \n";
    // 1 dollar is equal to 75.13 rupees
    // 1 pound is equal to 99.67 rupees
    // 1 rupee is equal to 0.013 dollars
    // 1 pound is equal to 0.010 pounds

    switch (choice)
    {
    case 1:
        res = money * dollar;
        cout << "Rupees to dollar is : " << res << endl;
        break;
    case 2:
        res = money * pound;
        cout << "Rupees to Pounds is : " << res << endl;
        break;
    case 3:
        res = money * euro;
        cout << "Rupees to Euro is : " << res << endl;
        break;
    case 4:
        res = money * 75.130322;
        cout << " Dollar to Rupee is : " << res << endl;
        break;
    case 5:
        res = money * 99.679514;
        cout << "Pound to Rupee is : " << res << endl;
        break;
    case 6:
        res = money * 84.842092;
        cout << "Euro to Rupee is : " << res << endl;
        break;
    default:
        cout << "Out of range";
        break;
    }
    getchar();
}
