/*
Name: Caleb Brothers
   Class : CS132
   Section : S
   Description : Binary search tree test program. Inserts dataset out of
   order into tree where it is properly "sorted" then outputs tree 
   contents in order.
*/
#include <iostream>
#include <cstdlib>
#include "Tree.h"

using namespace std;

int main()
{
   int insertionArr[] { 6, 9, 3, 5, 5, 7, 2, 10, 4, 1, 8 };

   Tree dataTree;

   for (int i = 0; i <= 10; i++) {
      cout << boolalpha << "Inserted? " 
           << dataTree.insert(insertionArr[i]) << endl;
   }

   cout << dataTree << endl;

   system("pause");
   return 0;
}
/*
OUTPUT
Inserting: 6
Insert into Empty Tree.
Inserted? true
Inserting: 9
Checking Right.
Cheking Right.
Inserted? true
Inserting: 3
Checking Right.
Cheking Left.
Inserted? true
Inserting: 5
Checking Right.
Cheking Left.
Cheking Left.
Cheking Right.
Inserted? true
Inserting: 5
Checking Right.
Cheking Left.
Cheking Left.
Cheking Right.
Cheking Right.
Inserted? false
Inserting: 7
Checking Right.
Cheking Right.
Cheking Left.
Inserted? true
Inserting: 2
Checking Right.
Cheking Left.
Cheking Left.
Inserted? true
Inserting: 10
Checking Right.
Cheking Right.
Cheking Right.
Inserted? true
Inserting: 4
Checking Right.
Cheking Left.
Cheking Left.
Cheking Right.
Cheking Right.
Inserted? true
Inserting: 1
Checking Right.
Cheking Left.
Cheking Left.
Cheking Left.
Inserted? true
Inserting: 8
Checking Right.
Cheking Right.
Cheking Left.
Cheking Left.
Cheking Right.
Inserted? true
1 2 3 4 5 6 7 8 9 10 Count: 10

Press any key to continue . . .
*/
