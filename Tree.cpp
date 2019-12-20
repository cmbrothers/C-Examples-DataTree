#include<iostream>
#include<cstdlib>
#include "Tree.h"
using namespace std;

bool Tree::insert(int newVal) {
   cout << "Inserting: " << newVal << endl;
   if (count == 0) {
      cout << "Insert into Empty Tree." << endl;
      root = new Node(newVal);
      count++;
      return true;
   }
   else if (count > 0) {
      Node *temp = root;

      cout << "Checking Right." << endl;
      while (newVal >= temp->data && temp->right != NULL) { 
         cout << "Cheking Right." << endl;
         if (newVal == temp->right->data || newVal == temp->left->data) {
            return false;
         }
         temp = temp->right;
      }
      if(newVal < temp->data) cout << "Cheking Left." << endl;
      while (newVal <= temp->data && temp->left != NULL) {
         cout << "Cheking Left." << endl;
         if (newVal == temp->right->data || newVal == temp->left->data) {
            return false;
         }
         temp = temp->left;
      }
      if(newVal > temp->data) cout << "Cheking Right." << endl;
      while (newVal >= temp->data && temp->right != NULL) {
         cout << "Cheking Right." << endl;
         if (newVal == temp->right->data || newVal == temp->left->data) {
            return false;
         }
         temp = temp->right;
      }

      if (newVal > temp->data) { 
         temp->right = new Node(newVal);;
         count++;
         return true;
      }

      if (newVal < temp->data) {
         temp->left = new Node(newVal);
         count++;
         return true;
      }
      return false;
   }
}
ostream& operator << (ostream& str, const Tree& tree) {
   
   tree.print(str, tree.root);

   cout << "Count: " << tree.count << endl;

   return str;
}
void Tree::print(ostream& ostr, Node* curNode) const {
   if (curNode != NULL) {
      print(ostr, curNode->left);
      cout << curNode->data << " ";
      print(ostr, curNode->right);
   }
}