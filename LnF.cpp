/*
Program Title: Campus Lost And Found Management System
Author: MARK DANIEL C. COMENDADOR
Course: CC 101 - Computer Programming
Date: August 17, 2026 - November 27, 2026
Description : This system helps record lost and found items, search records, and mark items as claimed.
*/

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

struct Item
{
   string name;
   string person;
   string location;
   string status;
};

vector<Item> records;

void ReportLostItem()
{
   Item item;

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

   records.push_back(item);

   cout << endl
        << "Lost item successfully reported!\n\n";
}

void ReportFoundItem()
{
   Item item;

   cout << endl
        << string(6, '-') << "REPORT LOST ITEM" << string(6, '-')
        << endl;

   cout << "Enter Item Name: ";
   getline(cin, item.name);

   cout << "Enter Finder: ";
   getline(cin, item.person);

   cout << "What Location was it Found?: ";
   getline(cin, item.location);

   item.status = "FOUND";

   records.push_back(item);

   cout << endl
        << "Found item successfully reported!\n\n";
}

void SearchItem()
{
   string searchItem;
   bool found = false;

   cout << endl
        << string(6, '-') << "SEARCH ITEM" << string(6, '-')
        << endl;

   cout << "Enter Item Name: ";
   getline(cin, searchItem);

   for (int i = 0; i < records.size(); i++)
   {
      if (records[i].name == searchItem)
      {
         cout << endl
              << "Item found!" << endl;
         cout << "Item Name: " << records[i].name << endl;
         cout << "Location: " << records[i].location << endl;
         cout << "Owner/Finder: " << records[i].person << endl;
         cout << "Status: " << records[i].status << endl
              << endl;

         found = true;
      }
   }

   if (!found)
   {
      cout << endl
           << "Item not found.\n\n";
   }
}

void DisplayRecords()
{
   cout << endl
        << string(6, '-') << "ALL RECORD" << string(6, '-')
        << endl;

   if (records.empty())
   {
      cout << "No records available.\n";
      return;
   }

   for (int i = 0; i < records.size(); i++)
   {
      cout << endl
           << "Record #" << i + 1 << endl;
      cout << "Item Name: " << records[i].name << endl;
      cout << "Location: " << records[i].location << endl;
      cout << "Owner/Finder: " << records[i].person << endl;
      cout << "Status: " << records[i].status << endl
           << endl;
   }
}

void ClaimItem()
{
   string itemName;

   cout << endl
        << string(6, '-') << "CLAIM ITEM" << string(6, '-')
        << endl;

   cout << "Enter Item Name to Claim: ";
   getline(cin, itemName);

   for (int i = 0; i < records.size(); i++)
   {
      if (records[i].name == itemName && records[i].status == "FOUND")
      {
         cout << endl
              << "Item found!" << endl;
         cout << "Item Name: " << records[i].name << endl;
         cout << "Location: " << records[i].location << endl;
         cout << "Finder: " << records[i].person << endl;

         records[i].status = "CLAIMED";

         cout << endl
              << "Item successfully claimed!\n\n";
         return;
      }
   }

   cout << endl
        << "Found item not available for claiming.\n\n";
}

void ExitProgram()
{
   cout << endl
        << "Thank you for using the Campus Lost and Found System!\n";
}

int main()
{
   int choicemenu;

   cout << endl;
   cout << string(30, '-') << endl;
   cout << "CAMPUS LOST AND FOUND SYSTEM\n";

   while (true)
   {
      cout << string(30, '-') << endl;
      cout << "1. Report Lost Item\n";
      cout << "2. Report Found Item\n";
      cout << "3. Search Item\n";
      cout << "4. Display All Records\n";
      cout << "5. Claim Item\n";
      cout << "6. Exit\n";

      cout << "Enter Choice: ";
      cin >> choicemenu;
      cin.ignore();

      switch (choicemenu)
      {
      case 1:
         ReportLostItem();
         break;
      case 2:
         ReportFoundItem();
         break;
      case 3:
         SearchItem();
         break;
      case 4:
         DisplayRecords();
         break;
      case 5:
         ClaimItem();
         break;
      case 6:
         ExitProgram();
         return 0;
         break;
      default:
         cout << endl
              << "Invalid Choice, Please Choose Again.\n";
      }
   }
   return 0;
}