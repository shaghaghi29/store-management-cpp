#include <iostream> // براي cin و cout
#include <string>   // براي string (فعلا استفاده نميشه ولي بعدا نياز ميشه)

using namespace std;

// ساختار کالا
struct Product
{
    string name;
    double price;
    int count;
};

int main()
{

    int number_menu;

    while (true)
    {
        // چاپ منو
        cout << "\n----- Store Management System -----\n";
        cout << "1. Add new product\n";
        cout << "2. Display products\n";
        cout << "3. Display inventory value\n";
        cout << "4. Display low stock\n";
        cout << "5. Search product\n";
        cout << "6. Save data\n";
        cout << "7. Load data\n";
        cout << "8. Sort products\n";
        cout << "9. Exit\n";
        cout << "Choose an option: ";

        // گرفتن انتخاب کاربر
        cin >> number_menu;

        switch (number_menu)
        {

        case 1:
            // اضافه کردن کالا (بعدا پياده‌سازي مي‌شود)
            break;

        case 2:
            // نمايش کالاها
            break;

        case 3:
            // نمايش ارزش موجودي
            break;

        case 4:
            // نمايش کالاهاي کم موجود
            break;

        case 5:
            // جستجو بر اساس نام کالا
            break;

        case 6:
            // ذخيره اطلاعات در فايل
            break;

        case 7:
            // بارگذاري اطلاعات از فايل
            break;

        case 8:
            // مرتب سازي کالاها
            break;

        case 9:
            // خروج از برنامه
            cout << "Exiting program...\n";
            return 0;

        default:
            // اگر گزينه نامعتبر وارد شود
            cout << "Invalid option!\n";
        }
    }

    return 0;
}
