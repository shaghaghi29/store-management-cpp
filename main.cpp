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

    Product products[50]; // آرايه‌ي نگهداري کالاها
    int n = 0;            // تعداد کالاهاي ثبت شده

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
        {
            // اضافه کردن يک کالاي جديد به آرايه

            if (n >= 50)
            {
                cout << "Storage is full. Cannot add more products.\n";
                break;
            }

            // دريافت نام کالا از کاربر
            cout << "Enter product name: ";
            cin >> products[n].name;

            // دريافت قيمت کالا
            cout << "Enter product price: ";
            cin >> products[n].price;

            // دريافت تعداد کالا
            cout << "Enter product quantity: ";
            cin >> products[n].count;

            // بعد از ذخيره کالا، شمارنده را يک واحد افزايش مي‌دهيم
            n++;

            cout << "Product added successfully.\n";
            break;
        }

        case 2:
        {
            // نمايش همه کالاهاي ثبت شده

            // اگر هنوز هيچ کالايي اضافه نشده باشد
            if (n == 0)
            {
                cout << "No products to display.\n";
                break;
            }

            // اگر کالا داريم، همه را چاپ مي‌کنيم
            cout << "\n--- Product List ---\n";

            // از اولين کالاي ثبت شده تا آخرين کالاي ثبت شده
            for (int i = 0; i < n; i++)
            {
                cout << (i + 1) << ") "
                     << "Name: " << products[i].name
                     << " | Price: " << products[i].price
                     << " | Quantity: " << products[i].count
                     << "\n";
            }

            break;
        }

        case 3:
        {
            // نمايش ارزش موجودي هر کالا (قيمت ضربدر تعداد)

            // اگر هنوز هيچ کالايي اضافه نشده باشد
            if (n == 0)
            {
                cout << "No products available.\n";
                break;
            }

            cout << "\n--- Inventory Value (Price x Quantity) ---\n";

            // براي هر کالا ارزش موجودي را حساب مي‌کنيم
            for (int i = 0; i < n; i++)
            {

                double value = products[i].price * products[i].count;
                // ارزش موجودي اين کالا = قيمت * تعداد

                cout << "Name: " << products[i].name
                     << " | Value: " << value << "\n";
            }

            break;
        }

        case 4:
        {
            // نمايش کالاهايي که تعدادشون کم است (کمتر از 5)

            // اگر هنوز هيچ کالايي اضافه نشده باشد
            if (n == 0)
            {
                cout << "No products available.\n";
                break;
            }

            cout << "\n--- Low Stock Products ---\n";

            int lowCount = 0;
            // اين متغير مي‌شمارد چند تا کالاي کم‌موجود داريم

            // بررسي تک‌تک کالاهاي ثبت شده
            for (int i = 0; i < n; i++)
            {

                // اگر تعداد کالا کمتر از 5 بود، کم‌موجود حساب مي‌شود
                if (products[i].count < 5)
                {

                    cout << "Name: " << products[i].name
                         << " | Quantity: " << products[i].count << "\n";

                    lowCount++;
                    // يعني يک کالاي کم‌موجود پيدا شد
                }
            }

            // اگر هيچ کالاي کم‌موجودي پيدا نشده بود
            if (lowCount == 0)
            {
                cout << "All products have sufficient stock.\n";
            }

            break;
        }

        case 5:
        {
            // جستجو کالا بر اساس نام و نمايش همه موارد مشابه

            if (n == 0)
            {
                cout << "No products available.\n";
                break;
            }

            string searchName;
            cout << "Enter product name to search: ";
            cin >> searchName;

            int foundCount = 0;
            // تعداد کالاهايي که با اين نام پيدا مي‌شوند

            cout << "\n--- Search Results ---\n";

            for (int i = 0; i < n; i++)
            {
                if (products[i].name == searchName)
                {

                    double value = products[i].price * products[i].count;

                    cout << (foundCount + 1) << ") "
                         << "Name: " << products[i].name
                         << " | Price: " << products[i].price
                         << " | Quantity: " << products[i].count
                         << " | Value: " << value << "\n";

                    foundCount++;
                }
            }

            if (foundCount == 0)
            {
                cout << "Product not found.\n";
            }
            else
            {
                cout << "Total matches: " << foundCount << "\n";
            }

            break;
        }

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
