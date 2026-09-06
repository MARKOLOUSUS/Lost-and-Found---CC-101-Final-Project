<h1>Campus Lost And Found Management System</h1>

<h3>Problem Statement</h3>
<p>Students who lose personal belongings often don't know whether someone has already found them. Likewise, people who find items have no organized way to record them. This system helps record lost and found items, search records, and mark items as claimed.</p>

## Report Lost Item 
START > Enter Lost Item Name > Enter Owner > Enter Category > Save Record >
Status = "LOST" > Increase Record Count > Display Success > END

## Report Found Item
START > Enter Found Item Name > Enter Finder > Enter Category > Save Record >
Status = "FOUND" > Increase Record Count > Display Success > END

## Search Item
START > Enter Item Name > Search Array > <br>
Found? > Yes > Display Record > END <br>
 V<br>
No > Display "Not Found" > END

## Display Records
IF no records = Display "No records.<br>
ELSE<br>
FOR every record > Display, Item Name, Category, Owner/Finder, Status > END

## Claim Lost Item
START > Enter Item Name > Search Item > <br>
Found? > Yes > Status = CLAIMED > Display Success > END <br>
 V<br>
No > Display = Not Found > END

## Exit Program
START > END         
