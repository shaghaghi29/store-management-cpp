#include <iostream>
#include <string>
using namespace std;

int main()
{
    // منوی فروشگاه
    int number_menu;
    cout << "Store Management System" << endl;
    cout << "1. Add new product" << endl;
    cout << "2. Show all products" << endl;
    cout << "3. Show inventory value" << endl;
    cout << "4. Show low stock products" << endl;
    cout << "5. Search by product name" << endl;
    cout << "6. Save data to file" << endl;
    cout << "7. Load data from file" << endl;
    cout << "8. Show products sorted by price" << endl;
    cout << "9. Exit" << endl;
    cin >> number_menu;

    switch (number_menu)
    {
    // 1. ورود کالای جدید
    case 1:
    {
        string product_name;
        int product_price;
        int product_number;

        cout << "Add new product" << endl;

        cout << "Enter product name: ";
        cin >> product_name;

        cout << "Enter product price: ";
        cin >> product_price;

        cout << "Enter product quantity: ";
        cin >> product_number;

        // ذخیره اطلاعات
        int save;
        cout << "Enter 0 to save information" << endl;
        cin >> save;

        if (save == 0)
            break;
        else
            cout << "Invalid input.";

        break;
    }

    default:
        cout << "Invalid input.";
        break;
    }

    return 0;
}
