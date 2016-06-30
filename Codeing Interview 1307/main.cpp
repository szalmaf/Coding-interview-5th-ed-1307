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

typedef map<Node*, Node*> mapNN;

// Recursive function to copy node structure starting from current node
Node* copy_nodes(Node* nodep, mapNN & nodemap){
    if(nodep == NULL)
        return NULL;
    
    mapNN::iterator mapNNi = nodemap.find(nodep);
    if(mapNNi != nodemap.end())
        return mapNNi->second;
    
    Node* newnode = new Node();
    nodemap[nodep] = newnode; // Add new entry to map with old and new (copy) pointer
    newnode->ptr1 = copy_nodes(nodep->ptr1, nodemap);
    newnode->ptr2 = copy_nodes(nodep->ptr2, nodemap);
    
    return newnode;
}

// nodemap's two columns contain the old and the new, copied node pointers
// Node's are copied by recursively calling the copy_nodes function
Node* create_copy(Node* rootp){
    mapNN nodemap;
    Node* new_rootp = copy_nodes(rootp, nodemap);
    return new_rootp;
}


// Code to copy a complete node structure or at least the pointers pointing at the nodes
int main (int argc, char *argv[])
{
    // Example node structure.
    Node *o = new Node(
                       new Node(
                                NULL,
                                new Node()),
                       new Node());
    
    // Create a copy of the node structure.
    Node *n = create_copy(o);
    
    
    
    // Stop before ending the program.
    int a;
    cin >> a;
    
    return 0;
}

