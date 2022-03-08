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
Node* head = nullptr;

bool addBooks() {
	string book;
	cout << "Enter book title and type \"Done\" when finished:" << endl;
while(true){
	cin >> book;
	if(book == "Done"){
		break;
	}else if(head==nullptr){
		head = new Node(book);
	}else{
		head->append(new Node(book));
	}
	}
}
void menu() {
string test;
cout << endl << "Would you like to:" << endl\
 << "1)Add Books to List"
		<< endl\
 << "2)Remove Book From List by Name" << endl\
 << "3)Remove Last Book From List" << endl\
		<< "4)Print List Information" << endl\
		<< "5)Delete List" << endl\
 << "6)Exit the Program" << endl;
cin >> test;
cout << test;
try {
	switch (stoi(test)) {
	case 1:
		addBooks();
		menu();
		break;
	case 2:
		{cout << "which book" << endl;
		string book;
		cin >> book;
		cout << ((head->remove(book))?"Book removed":"Book not found");
		menu();
		break;}
	case 3:
		cout << head->pop() << " removed" << endl;
		menu();
		break;
	case 4:
		{cout << "there are " << head->getSize()
				<< " books so far"<<endl<<
				"list of books so far:\n"
				<< head->printList();
		menu();
		break;}
	case 5:
		head->deleteList();
		menu();
		break;
	case 6:
		exit(5);
		break;
	default:
		menu();
		break;
	}
} catch (...) {
	cout << "NOT A NUMBER";
	menu();
}
}
int main() {
menu();
}
