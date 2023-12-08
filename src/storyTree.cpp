#include "../header/storyTree.h"
#include <iostream>
#include <cassert>

using std::cout;
using std::endl;

storyTree::storyTree() : fileName("storyScript.txt"), height(0) {
    // if only one child (rightchild null), directly go to that node (do not prompt user to make a choice)
    this->prev = nullptr;
    this->curr = nullptr;
    parseSource();
    // for (int i = 0; i < this->v.size(); ++i) {
    //     cout << "[Node " << i + 1 << "] :" << endl;
    //     cout << v.at(i)->getChoice() << endl;
    //     cout << v.at(i)->getDescription() << endl;
    //     cout << v.at(i)->isEncounter() << endl;
    // }
    curr = v.at(0);
    v.at(0)->setLeftChild(v.at(1));
    v.at(0)->setRightChild(v.at(2));
    v.at(1)->setLeftChild(v.at(3));
    v.at(2)->setLeftChild(v.at(3));
    v.at(3)->setLeftChild(v.at(4));
    v.at(3)->setRightChild(v.at(5));
    v.at(5)->setLeftChild(v.at(6));
    v.at(5)->setRightChild(v.at(7));
    v.at(4)->setLeftChild(v.at(8));
    v.at(6)->setLeftChild(v.at(8));
    v.at(7)->setLeftChild(v.at(8)); 
    v.at(8)->setLeftChild(v.at(9)); // grab syringe + light weapon
    v.at(8)->setRightChild(v.at(10));
    v.at(10)->setLeftChild(v.at(11)); // grab medium weapon
    v.at(10)->setRightChild(v.at(12)); // grab heavy weapon
    v.at(9)->setLeftChild(v.at(13));
    v.at(11)->setLeftChild(v.at(13));
    v.at(12)->setLeftChild(v.at(13));
    v.at(13)->setLeftChild(v.at(14)); // fight slippery alien
    v.at(13)->setRightChild(v.at(15)); // fight tank alien
};
storyTree::~storyTree() {
    for (int i = 0; i < this->v.size(); ++i) {
        // cout << "DELETING NODE " << i << endl;
        delete v.at(i);
        v.at(i) == nullptr;
    }
};
void storyTree::parseSource() { 
    // Read the story from a file so we don't have to recompile everytime the story is changed
    // Takes .txt file and grabs strings from it to build vector of nodes
    string newChoice = "";
    string newDescription = "";
    string checkEncounter = "";
    ifstream inFS;
    inFS.open(fileName);
    assert(inFS.is_open());
    while (inFS.is_open() && !inFS.eof()) {
        this->curr = new Node;
        getline(inFS, newChoice, '|');
        curr->setChoice(newChoice);
        getline(inFS, checkEncounter);
        if(checkEncounter == "&") {
            curr->setEncounter(true);
        }
        getline(inFS, newDescription, '^');
        inFS.ignore();
        inFS.ignore(); // allows for spacing in the text file
        curr->setDescription(newDescription);
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
bool storyTree::isLeaf(const Node* node) const {
    if (node->getLeftChild() == nullptr && node->getRightChild() == nullptr) {
        return true;
    }
    else { return false; }
};