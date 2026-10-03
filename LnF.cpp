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

// Storing an item
struct Item
{
   string name;
   string person;
   string location;
   string location;
   string status;
};

// Store all items here
vector<Item> records;

void ReportLostItem()
{
   Item item;

   cout << endl
        << string(6, '-') << "REPORT LOST ITEM" << string(6, '-')
        << endl;

   cout << "Enter Item Name: ";
   getline(cin, item.name);
   getline(cin, item.name);

   cout << "Enter Owner: ";
   getline(cin, item.person);
   getline(cin, item.person);

   cout << "What Location was it Lost?: ";
   getline(cin, item.location);
   cout << "What Location was it Lost?: ";
   getline(cin, item.location);

   item.status = "LOST";

   records.push_back(item);

   cout << endl
        << "Lost item successfully reported!" << endl;
}

void ReportFoundItem()
{
   Item item;

   cout << endl
        << string(6, '-') << "REPORT LOST ITEM" << string(6, '-')
        << endl;

   cout << "Enter Item Name: ";
   getline(cin, item.name);
   getline(cin, item.name);

   cout << "Enter Finder: ";
   getline(cin, item.person);
   getline(cin, item.person);

   cout << "What Location was it Found?: ";
   getline(cin, item.location);
   cout << "What Location was it Found?: ";
   getline(cin, item.location);

   item.status = "FOUND";

   records.push_back(item);

   cout << endl
        << "Found item successfully reported!" << endl;
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
   getline(cin, searchItem);

   for (int i = 0; i < records.size(); i++)
   {
      if (records[i].name == searchItem)
      {
         cout << endl
              << "Item found!" << endl;
         cout << "Item Name: " << records[i].name << endl;
         cout << "Location: " << records[i].location << endl;
         cout << "Location: " << records[i].location << endl;
         cout << "Owner/Finder: " << records[i].person << endl;
         cout << "Status: " << records[i].status << endl;

         found = true;
      }
   }

   if (!found)
   {
      cout << endl
           << "Item not found." << endl;
   }
}

void DisplayRecords()
{
   cout << endl
        << string(6, '-') << "ALL RECORD" << string(6, '-')
        << endl;

   if (records.empty())
   {
      cout << "No records available." << endl;
      return;
   }

   for (int i = 0; i < records.size(); i++)
   {
      cout << endl
           << "Record #" << i + 1 << endl;
      cout << "Item Name: " << records[i].name << endl;
      cout << "Location: " << records[i].location << endl;
      cout << "Location: " << records[i].location << endl;
      cout << "Owner/Finder: " << records[i].person << endl;
      cout << "Status: " << records[i].status << endl;
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
   getline(cin, itemName);

   for (int i = 0; i < records.size(); i++)
   {
      if (records[i].name == itemName && records[i].status == "FOUND")
      {
         cout << endl
              << "Item found!" << endl;
         cout << "Item Name: " << records[i].name << endl;
         cout << "Location: " << records[i].location << endl;
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
        << "Thank you for using the Campus Lost and Found System!" << endl;
}

int main()
{
   int choicemenu;

   while (true)
   {
      cout << endl;
      cout << string(30, '-') << endl;
      cout << "CAMPUS LOST AND FOUND SYSTEM" << endl;
      cout << string(30, '-') << endl;

      cout << "1. Report Lost Item" << endl;
      cout << "2. Report Found Item" << endl;
      cout << "3. Search Item" << endl;
      cout << "4. Display All Records" << endl;
      cout << "5. Claim Item" << endl;
      cout << "6. Exit" << endl;

      cout << endl
           << "Enter Choice: ";
      cin >> choicemenu;
      cin.ignore();
      cin.ignore();

      if (choicemenu == 1)
      {
         ReportLostItem();
      }
      else if (choicemenu == 2)
      {
         ReportFoundItem();
      }
      else if (choicemenu == 3)
      {
         SearchItem();
      }
      else if (choicemenu == 4)
      {
         DisplayRecords();
      }
      else if (choicemenu == 5)
      {
         ClaimItem();
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