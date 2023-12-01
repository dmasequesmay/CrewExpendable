#include "../headers/node.h"

Node::Node() {
    this->choice = "";
    this->description = "";
    this->leftChild = nullptr;
    this->rightChild = nullptr;
    this->encounter = false;
};
Node::Node(const string& c, const string& d, bool e) {
    this->choice = c;
    this->description = d;
    this->encounter = e;
};
string Node::getChoice() const {
    return this->choice;
};
void Node::setChoice(const string& c) {
    this->choice = c;
};
string Node::getDescription() const {
    return this->description;
};
void Node::setDescription(const string& d) {
    this->description = d;
};
bool Node::isEncounter() {
    return this->encounter;
};
void Node::setEncounter(bool e) {
    this->encounter = e;
};
Node* Node::getLeftChild() const {
    return this->leftChild;
};
void Node::setLeftChild(Node* l) {
    this->leftChild = l;
};
Node* Node::getRightChild() const {
    return this->rightChild;
};
void Node::setRightChild(Node* r) {
    this->rightChild = r;
};