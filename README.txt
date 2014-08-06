Goal:

Library staff run an RTF (“Request To Fill”) report each morning that details item records that should be pulled for hold requests. Staff want these lists to be sorted so that items appear on the list in the same order that the staff member would encounter the items while performing a logical circuit of the library, in order to reduce unnecessary back & forth trips between the stacks. Accordingly, the list contents must be sorted according to a branch-specific definition of the sort order.


The sort order is essentially determined by shelving locations in each library. Currently, the sort order is defined by each library in an Excel macro that is maintained in-house. Each branch has a set of locations in their building to which an item may be assigned, based on meta-data available in the RTF report, including the "CollectionName", "Call Number", and "Shelf Location"  (which is usually blank and reserved for things like "reference" or "new").

Program Description:

The program should accept a .csv format file with line breaks separating records; each record includes the following pieces of data, with curly braces around {optional} fields:

- {itembarcode},{shelf location},call number,title,author,publisher,collectionname,year

At a high level, the program must accomplish two goals:
- 1) Sort every record in a library-specific order, according to the shelf that the item goes on
- 2) For each subset of the above sort-order, sort all records according to their collectionname and call number, as defined in the "Shelving Guidelines" manual (e.g., all "Readers" items go together).

In designing this program, it is therefore paramount that 
- 1) Library staff are able to easily define the shelving order in a way that the program can understand
-- 1a) Staff must have a complete and non-redundant list of shelving location options, which they can consolidate
*--- X) Shelving area > Shelves > someShelf
*---- Xa) struct ShelvingArea{list of shelves}
*---- Xb) struct Shelves{list of someShelf's}
*---- Xc) struct someShelf{list of items}
--- 1aa) At the lowest level, the container is a container for item records (sorted)

-- 1b) Staff must be able to easily reorganize location options, either individually or in consolidated form

