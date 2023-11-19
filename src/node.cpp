#include "../headers/node.h"

Node::Node() {
    this->choice = "";
    this->description = "";
    this->leftChild = nullptr;
    this->rightChild = nullptr;
};
Node::Node(const string& c, const string& d) {
    this->choice = c;
    this->description = d;
};
string Node::getChoice() const {
    return this->choice;
};
string Node::getDescription() const {
    return this->description;
};
void Node::setChoice(const string& c) {
    this->choice = c;
};
void Node::setDescription(const string& d) {
    this->description = d;
};
Node* Node::getLeftChild() const {
    return this->leftChild;
};
Node* Node::getRightChild() const {
    return this->rightChild;
};
void Node::setLeftChild(Node* l) {
    this->leftChild = l;
};
void Node::setRightChild(Node* r) {
    this->rightChild = r;
};