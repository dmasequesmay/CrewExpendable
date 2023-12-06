#ifndef _NODE_H_
#define _NODE_H_

#include <iostream>
#include <string>

using std::string;
using std::ifstream;

class Node {
    private:
        // Each node should hold both the choice and the detailed story description that resulted from choosing it
        string choice;
        string description;
        bool encounter; // True if choice triggers combat
        Node* leftChild;
        Node* rightChild;
    public:
        Node();
        Node(const string& c, const string& d, bool e);
        string getChoice() const;
        void setChoice(const string& c);
        string getDescription() const;
        void setDescription(const string& d);
        bool isEncounter();
        void setEncounter(bool e);
        Node* getLeftChild() const;
        void setLeftChild(Node* l);
        Node* getRightChild() const;
        void setRightChild(Node* r);
};


#endif
