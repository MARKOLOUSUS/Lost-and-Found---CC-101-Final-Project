## Report Lost Item 
START > Enter Lost Item Name > Enter Owner > Enter Category > Save Record >
Status = "LOST" > Increase Record Count > Display Success > END

## Report Found Item
START > Enter Found Item Name > Enter Finder > Enter Category > Save Record >
Status = "FOUND" > Increase Record Count > Display Success > END

## Search Item
START > Enter Item Name > Search Array > 
Found? > Yes > Display Record > END
V
No > Display "Not Found" > END

## Display Records
IF no records = Display "No records.
ELSE
FOR every record
  V
Display
Item Name
Category
Owner/Finder
Status
 V
END

## Claim Lost Item
START > Enter Item Name > Search Item >
Found? > Yes > Status = CLAIMED > Display Success > END
V
No > Display = Not Found

## Exit Program
START > END         
