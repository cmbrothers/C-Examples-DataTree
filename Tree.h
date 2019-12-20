/*
Name: Caleb Brothers
   Class : CS132
   Section : S
   Description : Demo class of Binary search tree data structure. 
   Able to insert data into tree and recall to screen.
*/

#include <iostream>

using namespace std;

#ifndef TREE_H
#define TREE_H
// Tree class definition from Tree.h
class Tree {
public:
   class Node {
   public:
      Node() : left(nullptr), right(nullptr), data(0) {}
      Node(int val) : left(nullptr), right(nullptr), data(val) {}
      int data;
      Node *left, *right;
   };

   Tree() : count(0), root(nullptr) {}
   bool insert(int newVal);
   friend ostream& operator << (ostream& str, const Tree& tree);  
   // calls print and 
   // outputs count
private:
   void print(ostream& ostr, Node* curNode) const;  // recursive function for data recall
   Node* root;
   int count;
};
#endif