// Q.6. Create a menu driven program for Shopping Cart System. Create class Item with data
// members itemId, itemName, price. Use vector to store items.
// Menu options:
// 1. Add Item
// 2. Display Items
// 3. Calculate Total Bill
// 4. Exit
// Throw exception if price is invalid or negative value

#include <iostream>
#include <vector>
using namespace std;

class Item
{
    struct cart
    {
        /* data */
        int itemId;
        int price;
        string itemName;
    };
    cart c;
    vector<cart> cartVector;

public:
    Item()
    {
        c.itemId = 0;
        c.price = 0;
        c.itemName = " ";
    }

    void addItem()
    {
        try
        {
            cout << "Enter ItemId for item : " << "\n";
            cin >> c.itemId;
            cout << "Enter Item Name : " << "\n";
            cin >> c.itemName;
            cout << "Enter Item Price : " << "\n";
            cin >> c.price;

            if (c.price < 0)
            {
                throw "Price cannot be negative!!!";
            }

            if (cin.fail())
            {
                throw "Invalid input";
            }

            cartVector.push_back(c);
            cout << "Data added Succuessfully!!!";
            cout << "\n";
        }
        catch (const char *error)
        {
            cout << error << "\n";
        }
    }

    void display()
    {
        for (auto it : cartVector)
        {
            cout << "Id of Item :" << it.itemId << "\n";
            cout << "Name of Product :" << it.itemName << "\n";
            cout << "Price of Product : " << it.price << "\n";
            cout << "\n";
        }
    };

    void getBill()
    {
        int totalBill = 0;
        for (auto it : cartVector)
        {
            totalBill = totalBill + it.price;
        }
        cout << "Total Bill :" << totalBill << "\n";
        cout << "\n";
    }

    void menu()
    {
        int option;
        while (true)
        {
            /* code */

            cout << "Select Option:" << "\n";
            cout << "Select 1 to add item into cart : " << "\n";
            cout << "Select 2 to cart display: " << "\n";
            cout << "Select 3 to genrate Bill : " << "\n";
            cout << "Select 4 to Exit !!";
            cout << "\n";
            cin >> option;
            cout << "\n";

            switch (option)
            {
            case 1:
                addItem();
                break;
            case 2:
                display();
                break;

            case 3:
                getBill();
                break;
            case 4:
                exit(0);
                cout << "Thank You Please Visit Again :)";
                cout << "\n";
                break;
            default:
                cout << "Select Proper option :)" <<"\n";
                cout << "\n";
                break;
            }
        }
    }
};

int main()
{
    Item I;
    I.menu();
    return 0;
}