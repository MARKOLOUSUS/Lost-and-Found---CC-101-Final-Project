<h1>Campus Lost And Found Management System</h1>

<h3>Problem Statement</h3>
<p>Students who lose personal belongings often don't know whether someone has already found them. Likewise, people who find items have no organized way to record them. This system helps record lost and found items, search records, and mark items as claimed.</p>

# Algorithm
1. Start
2. Display menu
3. Input menu (no. 1-6)
4. If 1 - Report Lost Item
   > Input Item Name
   > Input Ownwer Name
   > Input Categories
   > Record Item
   > Item Status Lost
   > Continue the loop

5. If 2 - Report Found Item
   > Input Item Name
   > Input Finder Name
   > Input Categories
   > Record Item
   > Item Status Found
   > Continue the loop

6. If 3 - Search for Item
   > Input Item Name
   > Compare Item Name to Recorded Items
   > If record found, display detail
   > If record not found, display Item not Found
   > Continue the loop
  
7. If 4 - Display All Record
   > Check Recorded Item
   > If there are Records, display all details
   > If there are no Records, display No Record Available
   > Continue the loop

8. If 5 - Claim Item
   > Input Item Name
   > Input Owner Name
   > Compare Item and Owner Name in Records
   > If Found, display all detail and Status CLAIMED
   > If not Found, display Found item not available for claiming
   > Continue the loop

9. If 6 - Exit the Program
   > End the loop

10. End


