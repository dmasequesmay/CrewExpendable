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
string Node::getDescription() const {
    return this->description;
};
void Node::setChoice(const string& c) {
    this->choice = c;
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
Node* Node::getRightChild() const {
    return this->rightChild;
};
void Node::setLeftChild(Node* l) {
    this->leftChild = l;
};
void Node::setRightChild(Node* r) {
    this->rightChild = r;
};