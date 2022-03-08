/*
 Author:       Benjie
 Class:        CSI-240-03
 Assignment:   Lab7-6
 Date Created: Mar 8, 2022
 Description:Linked List
 Certification of Authenticity:
 I certify that this is entirely my own work, except where I have given
 fully-documented references to the work of others. I understand the
 definition and consequences of plagiarism and acknowledge that the assessor
 of this assignment may, for the purpose of assessing this assignment:
 - Reproduce this assignment and provide a copy to another member of
 academic staff; and/or
 - Communicate a copy of this assignment to a plagiarism checking
 service (which may then retain a copy of this assignment on its
 database for the purpose of future plagiarism checking)
 */
#include "Node.h"
#include <iostream>

Node::Node(string data) {
	this->data=data;
	nextNode=nullptr;
}
Node::Node(string data,Node* head) {
	this->data=data;
	nextNode=nullptr;

}

Node::~Node() {
	// TODO Auto-generated destructor stub
}

int Node::getSize() {
	if(isTail()){
		return 1;
	}
	return 1+nextNode->getSize();
}

string Node::printList() {
	if(isTail()){
		return getData();
	}
		return getData()+"\n"+nextNode->printList();
}

void Node::append(Node* newNode) {
	if(isTail()){
		nextNode=newNode;
	}
	else{
		nextNode->append(newNode);
	}
}

string Node::pop() {
	if(nextNode->isTail()){
		string value = nextNode->getData();
		delete nextNode;
		nextNode=nullptr;
		return value;
	}
	return nextNode->pop();
}

string Node::getData() {
	return data;
}

bool Node::isTail() {
	return nextNode==nullptr;
}

bool Node::remove(string data) {
	if(isTail()){
		return false;
	}
	else if(nextNode->getData()==data){
		Node* next = nextNode->nextNode;
		delete nextNode;
		nextNode = next;
		return true;
	}
	return nextNode->remove(data);
}
string Node::remove(int index){

}
void Node::deleteList(){
	nextNode->deleteList();
	delete this;
}
