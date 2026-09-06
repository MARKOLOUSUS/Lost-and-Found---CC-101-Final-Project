#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Item
{
   string name;
   string person;
   string category;
   string status;
};

vector<Item> records;

void ReportLostItem()
{
   Item item;

   cout << "\n--- REPORT LOST ITEM ---\n";

   cout << "Enter Item Name: ";
   cin >> item.name;

   cout << "Enter Owner: ";
   cin >> item.person;

   cout << "Categories: " << endl;
   cout << "Personal, Electronics, Clothing, Books, Other" << endl;

   cout << "Enter Category: ";
   cin >> item.category;

   item.status = "LOST";

   records.push_back(item);

   cout << "\nLost item successfully reported!\n";
}

void ReportFoundItem()
{
   Item item;

   cout << "\n--- REPORT FOUND ITEM ---\n";

   cout << "Enter Item Name: ";
   cin >> item.name;

   cout << "Enter Finder: ";
   cin >> item.person;

   cout << "Categories: " << endl;
   cout << "Personal, Electronics, Clothing, Books, Other" << endl;

   cout << "Enter Category: ";
   cin >> item.category;

   item.status = "FOUND";

   records.push_back(item);

   cout << "\nFound item successfully reported!\n";
}

void SearchItem()
{
   string searchItem;
   bool found = false;

   cout << "\n--- SEARCH ITEM ---\n";

   cout << "Enter Item Name: ";
   cin >> searchItem;

   for (int i = 0; i < records.size(); i++)
   {
      if (records[i].name == searchItem)
      {
         cout << "\nItem found!\n";
         cout << "Item Name: " << records[i].name << endl;
         cout << "Category: " << records[i].category << endl;
         cout << "Owner/Finder: " << records[i].person << endl;
         cout << "Status: " << records[i].status << endl;

         found = true;
      }
   }

   if (!found)
   {
      cout << "\nItem not found.\n";
   }
}

void DisplayRecords()
{
   cout << "\n--- ALL RECORDS ---\n";

   if (records.empty())
   {
      cout << "No records available.\n";
      return;
   }

   for (int i = 0; i < records.size(); i++)
   {
      cout << "\nRecord #" << i + 1 << endl;
      cout << "Item Name: " << records[i].name << endl;
      cout << "Category: " << records[i].category << endl;
      cout << "Owner/Finder: " << records[i].person << endl;
      cout << "Status: " << records[i].status << endl;
   }
}

void ClaimItem()
{
   string itemName, owner;

   cout << "\n--- CLAIM ITEM ---\n";

   cout << "Enter Item Name: ";
   cin >> itemName;

   cout << "Enter Owner Name: ";
   cin >> owner;

   for (int i = 0; i < records.size(); i++)
   {
      if (records[i].name == itemName &&
          records[i].person == owner &&
          records[i].status == "LOST")
      {
         records[i].status = "CLAIMED";

         cout << "\nItem successfully claimed!\n";
         return;
      }
   }

   cout << "\nItem not found.\n";
}

void ExitProgram()
{
   cout << "\nThank you for using the Campus Lost and Found System!\n";
}

int main(void)
{
   int menu;

   while (true)
   {
      cout << "\n";
      cout << "------------------------------" << endl;
      cout << " CAMPUS LOST AND FOUND SYSTEM" << endl;
      cout << "------------------------------" << endl;

      cout << "1. Report Lost Item" << endl;
      cout << "2. Report Found Item" << endl;
      cout << "3. Search Item" << endl;
      cout << "4. Display All Records" << endl;
      cout << "5. Claim Item" << endl;
      cout << "6. Exit" << endl;

      cout << "\nEnter Choice: ";
      cin >> menu;

      if (menu == 1)
      {
         ReportLostItem();
      }
      else if (menu == 2)
      {
         ReportFoundItem();
      }
      else if (menu == 3)
      {
         SearchItem();
      }
      else if (menu == 4)
      {
         DisplayRecords();
      }
      else if (menu == 5)
      {
         ClaimItem();
      }
      else if (menu == 6)
      {
         ExitProgram();
         break;
      }
      else
      {
         cout << "\nInvalid Choice, Please Choose Again (1-6)." << endl;
      }
   }
}
