#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Storing an item
struct Item
{
   string name;
   string person;
   string category;
   string status;
};

// Store all items here
vector<Item> records;

// Report a lost item
void ReportLostItem()
{
   Item item;

   cout << "\n--- REPORT LOST ITEM ---\n";

   cout << "Enter Item Name: ";
   cin >> item.name;

   cout << "Enter Owner: ";
   cin >> item.person;

   cout << "Enter Category: ";
   cin >> item.category;

   item.status = "LOST";

   records.push_back(item);

   cout << "\nLost item successfully reported!\n";
}

// Report a found item
void ReportFoundItem()
{
   Item item;

   cout << "\n--- REPORT FOUND ITEM ---\n";

   cout << "Enter Item Name: ";
   cin >> item.name;

   cout << "Enter Finder: ";
   cin >> item.person;

   cout << "Enter Category: ";
   cin >> item.category;

   item.status = "FOUND";

   records.push_back(item);

   cout << "\nFound item successfully reported!\n";
}

// Search for an item
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

// Display all records
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

// Claim an item
void ClaimItem()
{
   string itemName;

   cout << "\n--- CLAIM ITEM ---\n";

   cout << "Enter Item Name to Claim: ";
   cin >> itemName;

   for (int i = 0; i < records.size(); i++)
   {
      if (records[i].name == itemName && records[i].status == "FOUND")
      {
         cout << "\nItem found!\n";
         cout << "Item Name: " << records[i].name << endl;
         cout << "Category: " << records[i].category << endl;
         cout << "Finder: " << records[i].person << endl;

         records[i].status = "CLAIMED";

         cout << "\nItem successfully claimed!\n";
         return;
      }
   }

   cout << "\nFound item not available for claiming.\n";
}

// Exit program
void ExitProgram()
{
   cout << "\nThank you for using the Campus Lost and Found System!\n";
}

int main()
{
   int choicemenu;

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
      cin >> choicemenu;

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
         cout << "\nInvalid Choice, Please Choose Again." << endl;
      }
   }

   return 0;
}

// VVVV AI Flowchart and Pseudocode VVVV
/*
             START
                |
                v
      Display Main Menu
                |
                v
         Get User Choice
                |
      +---------+---------+
      |         |         |
      v         v         v
 Report     Report     Search
 Lost       Found       Item
      |         |         |
      +---------+---------+
                |
                v
       Display Records?
                |
                v
         Claim an Item?
                |
                v
        Exit Selected?
          /        \
        No          Yes
        |            |
        +------------+
                     |
                     v
                   END
*/
/*
START

Initialize arrays
Set recordCount = 0

DO

    Display Main Menu

    Read choice

    SWITCH(choice)

        CASE 1:
            Call ReportLostItem()
            BREAK

        CASE 2:
            Call ReportFoundItem()
            BREAK

        CASE 3:
            Call SearchItem()
            BREAK

        CASE 4:
            Call DisplayRecords()
            BREAK

        CASE 5:
            Call ClaimItem()
            BREAK

        CASE 6:
            Exit Program

        DEFAULT:
            Display "Invalid Choice"

END SWITCH

WHILE(choice != 6)

END
*/

/* Function 1
START
   |
Enter Item Name
   |
Enter Owner
   |
Enter Category
   |
Save Record
   |
Status = LOST
   |
Increase Record Count
   |
Display Success
   |
END
*/
/*
FUNCTION ReportLostItem

Input item name
Input owner name
Input category

Store information into arrays

Set status = "LOST"

Increase record count

Display "Item successfully recorded."

END FUNCTION
*/

/* Function 2

FUNCTION ReportFoundItem

Input item name

Input finder name

Input category

Store information

Set status = "FOUND"

Increase record count

Display success message

END FUNCTION
*/

/* Function 3
START
   |
Enter Item Name
   |
Search Array
   |
Found?
 /     \
No      Yes
 |        |
Display   Display Record
Not Found
  |
  END
*/
/*
FUNCTION SearchItem

Input search name

FOR every record

    IF item name matches search

        Display record

        RETURN

END FOR

Display "Item not found."

END FUNCTION
*/

/* Function 4
FUNCTION DisplayRecords

IF no records

    Display "No records."

ELSE

FOR every record

Display
Item Name
Category
Owner/Finder
Status

END FOR

END IF

END FUNCTION
*/

/* Function 5
START
   |
Enter Item Name
   |
Search Item
   |
Found?
 /    \
No     Yes
 |        |
Display   Status = CLAIMED
Not Found |
          |
   Display Success
          |
         END
*/
/*
FUNCTION ClaimItem

Input item name

FOR every record

IF item exists

Change status to CLAIMED

Display success

RETURN

END IF

END FOR

Display "Item not found."

END FUNCTION
*/