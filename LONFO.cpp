#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// User-defined structure
struct Item
{
    string name;
    string person;
    string location;
    string status;
};

// ARRAY
Item records[100];
int recordCount = 0;

// Parameter passing
void ReportLostItem(Item item)
{
    cout << endl
         << string(6, '-') << "REPORT LOST ITEM" << string(6, '-')
         << endl;

    cout << "Enter Item Name: ";
    getline(cin, item.name);

    cout << "Enter Owner: ";
    getline(cin, item.person);

    cout << "What Location was it Lost?: ";
    getline(cin, item.location);

    item.status = "LOST";

    records[recordCount] = item;
    recordCount++;

    cout << endl
         << "Lost item successfully reported!" << endl;
}

// Parameter passing
void ReportFoundItem(Item item)
{
    cout << endl
         << string(6, '-') << "REPORT FOUND ITEM" << string(6, '-')
         << endl;

    cout << "Enter Item Name: ";
    getline(cin, item.name);

    cout << "Enter Finder: ";
    getline(cin, item.person);

    cout << "What Location was it Found?: ";
    getline(cin, item.location);

    item.status = "FOUND";

    records[recordCount] = item;
    recordCount++;

    cout << endl
         << "Found item successfully reported!" << endl;
}

// RECURSION
void SearchItem(string searchItem, int index)
{
    // Base case
    if (index >= recordCount)
    {
        cout << endl
             << "Item not found." << endl;
        return;
    }

    // Conditional control structure
    if (records[index].name == searchItem)
    {
        cout << endl
             << "Item found!" << endl;

        cout << "Item Name: " << records[index].name << endl;
        cout << "Location: " << records[index].location << endl;
        cout << "Owner/Finder: " << records[index].person << endl;
        cout << "Status: " << records[index].status << endl;

        return;
    }

    // Recursive call
    SearchItem(searchItem, index + 1);
}

void DisplayRecords(int index)
{
    // Base case for recursion
    if (index >= recordCount)
    {
        return;
    }

    cout << endl
         << "Record #" << index + 1 << endl;

    cout << "Item Name: " << records[index].name << endl;
    cout << "Location: " << records[index].location << endl;
    cout << "Owner/Finder: " << records[index].person << endl;
    cout << "Status: " << records[index].status << endl;

    // Recursive call
    DisplayRecords(index + 1);
}

// Parameter passing
void ClaimItem(string itemName)
{
    for (int i = 0; i < recordCount; i++)
    {
        if (records[i].name == itemName &&
            records[i].status == "FOUND")
        {
            cout << endl
                 << "Item found!" << endl;

            cout << "Item Name: " << records[i].name << endl;
            cout << "Location: " << records[i].location << endl;
            cout << "Finder: " << records[i].person << endl;

            records[i].status = "CLAIMED";

            cout << endl
                 << "Item successfully claimed!" << endl;

            return;
        }
    }

    cout << endl
         << "Found item not available for claiming." << endl;
}

void ExitProgram()
{
    cout << endl
         << "Thank you for using the Campus Lost and Found System!"
         << endl;
}

int main()
{
    int choicemenu;

    while (true)
    {
        cout << endl;
        cout << string(30, '-') << endl;
        cout << "CAMPUS LOST AND FOUND SYSTEM";
        cout << endl;
        cout << string(30, '-') << endl;

        cout << "1. Report Lost Item" << endl;
        cout << "2. Report Found Item" << endl;
        cout << "3. Search Item" << endl;
        cout << "4. Display All Records" << endl;
        cout << "5. Claim Item" << endl;
        cout << "6. Exit" << endl;

        cout << endl;
        cout << "Enter Choice: ";

        cin >> choicemenu;
        cin.ignore();

        if (choicemenu == 1)
        {
            Item item;
            ReportLostItem(item);
        }
        else if (choicemenu == 2)
        {
            Item item;
            ReportFoundItem(item);
        }
        else if (choicemenu == 3)
        {
            string searchItem;

            cout << "Enter Item Name: ";
            getline(cin, searchItem);

            SearchItem(searchItem, 0);
        }
        else if (choicemenu == 4)
        {
            if (recordCount == 0)
            {
                cout << endl
                     << "No records available." << endl;
            }
            else
            {
                cout << endl
                     << string(6, '-') << "ALL RECORDS" << string(6, '-')
                     << endl;

                DisplayRecords(0);
            }
        }
        else if (choicemenu == 5)
        {
            string itemName;

            cout << "Enter Item Name to Claim: ";
            getline(cin, itemName);

            ClaimItem(itemName);
        }
        else if (choicemenu == 6)
        {
            ExitProgram();
            break;
        }
        else
        {
            cout << endl
                 << "Invalid Choice, Please Choose Again." << endl;
        }
    }

    return 0;
}