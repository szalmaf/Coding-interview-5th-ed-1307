//
//  main.cpp
//  Codeing Interview 1307
//
//  Created by Ferenc Szalma on 6/30/16.
//  Copyright © 2016 Ferenc Szalma. All rights reserved.
//

#include <iostream>
using namespace std;


// A node structure with 2 pointers pointing to other nodes
struct 	Node
{
    Node* ptr1;
    Node* ptr2;
    
    Node():ptr1(NULL), ptr2(NULL){}
    Node(Node* ptr1, Node* ptr2) : ptr1(ptr1), ptr2(ptr2){}
};


Node* meth(Node* p)
{
    Node *newp = new Node(*p);
    return newp;
}



// Code to copy a complete node structure or at least the pointers to the nodes
int main (int argc, char *argv[])
{
    Node *n1 = new Node();
    
    
    
    
    
    int a;
    cin >> a;
    
    return 0;
}

