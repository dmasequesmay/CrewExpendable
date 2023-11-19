#include "../headers/storyTree.h"
#include <iostream>

using std::cout;
using std::endl;

storyTree::storyTree() : fileName("storyScript.txt") {
    this->prev = nullptr;
    this->curr = nullptr;

    parseSource();
    for (int i = 0; i < this->v.size(); ++i) {
        cout << "Node " << i + 1 << ":" << endl;
        cout << v.at(i)->getChoice() << endl;
        cout << v.at(i)->getDescription() << endl;
    }
    this->curr = v.at(0);

};
storyTree::~storyTree() {
    // TODO: Free nodes
    for (int i = 0; i < this->v.size(); ++i) {
        delete v.at(i);
    }
};
void storyTree::parseSource() { 
    // Read the story from a file so we don't have to recompile everytime the story is changed
    string newChoice = "";
    string newDescription = "";
    ifstream inFS;
    inFS.open(fileName);
    while (inFS.is_open() && !inFS.eof()) {
        this->curr = new Node;
        getline(inFS, newChoice, '&');
        inFS.ignore(); // discard newlines
        curr->setChoice(newChoice);
        // cout << "CHOICE: " << "\n";
        // cout << curr->getChoice() << "\n";
        getline(inFS, newDescription, '^');
        inFS.ignore();
        inFS.ignore(); // allows for spacing in the text file
        curr->setDescription(newDescription);
        // cout << "DESCRIPTION: " << "\n";
        // cout << curr->getDescription() << "\n";
        this->v.push_back(curr);
    }
    this->curr = this->v.at(0);
    inFS.close();
};
void storyTree::moveLeft() {
    this->prev = curr;
    this->curr = curr->getLeftChild();
};
void storyTree::moveRight() {
    this->prev = curr;
    this->curr = curr->getRightChild();
};
