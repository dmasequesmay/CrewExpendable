#ifndef _STORYTREE_H_
#define _STORYTREE_H_

#include "../headers/node.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::string;
using std::vector;

class storyTree {
    private: 
        vector<Node*> v; 
        const string fileName;
        int height;
    public:
        storyTree(); // Constructs our storyline by manually setting each node's children
        ~storyTree();
        Node* curr; // Pointer to the node where the player currently is in the storyTree
        Node* prev; // Pointer to the parent node (previous player decision)
        void parseSource(); // Takes strings from text file and builds a vector of nodes
        void moveLeft(); // before moving, set prev to curr and then curr to children
        void moveRight();
        bool isLeaf(const Node* node) const; 
};

#endif