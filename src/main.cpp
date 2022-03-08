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
#include <iostream>
#include "Node.h"
using namespace std;

int main() {

	Node head("hello");
	head.append(new Node("world"));
	cout << head.getSize();
	cout << head.printList();

}
