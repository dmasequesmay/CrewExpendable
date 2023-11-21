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
        Node* leftChild;
        Node* rightChild;
        bool encounter; // True if choice triggers combat
    public:
        Node();
        Node(const string& c, const string& d, bool e);
        string getChoice() const;
        string getDescription() const;
        void setChoice(const string& c);
        void setDescription(const string& d);
        Node* getLeftChild() const;
        Node* getRightChild() const;
        void setLeftChild(Node* l);
        void setRightChild(Node* r);
        bool isEncounter();
        void setEncounter(bool e);
};


#endif
