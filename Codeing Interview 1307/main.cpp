//
//  main.cpp
//  Codeing Interview 1307
//
//  Created by Ferenc Szalma on 6/30/16.
//  Copyright © 2016 Ferenc Szalma. All rights reserved.
//

#include <iostream>
#include <map>

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


Node* copy_nodes(Node* nodep){
    return nodep;
}


Node* create_copy(Node* rootp){
    map<Node*, Node*> nodemap;
    Node* new_rootp = copy_nodes(rootp);
    return new_rootp;
}


// Code to copy a complete node structure or at least the pointers to the nodes
int main (int argc, char *argv[])
{
    Node *o = new Node(new Node(NULL, new Node()), new Node());
    Node *n = create_copy(o);
    
    
    
    
    int a;
    cin >> a;
    
    return 0;
}

