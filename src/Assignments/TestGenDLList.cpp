/*
 * TestGenDLList.cpp
 *
 *  Created on: Jan. 28, 2022
 *      Author: mao
 */

#include <iostream>
//#include "GenDLListA.h"
#include "GenDLListAns.h"
using namespace std;


int testGenDLList()
{
	cout << endl << "Doubly Linked List: " << endl;

	DoublyLinkedListA<int> *DLlist = new DoublyLinkedListA<int>();

	cout <<"Testing empty() method: expecting True, and the result is: " << (DLlist->empty()? "True":"False") << endl;

	DLlist->addToDLLTail(5);
	DLlist->addToDLLTail(1);
	DLlist->addToDLLTail(2);
	DLlist->addToDLLTail(3);
	DLlist->addToDLLTail(4);

	cout <<"Testing isInList(): expecting True, and the result is: " << (DLlist->isInList(4)? "True":"False") << endl;
	cout <<"Testing isInList(): expecting False, and the result is: " << (DLlist->isInList(7)? "True":"False") << endl;
	cout <<"Deleting 3 " << endl;
	DLlist->deleteNode(3);
	cout <<"Testing deleteNode(): expecting False, and the result is: " << (DLlist->isInList(3)? "True":"False") << endl;

	DLlist->deleteNode(1);
	DLlist->deleteNode(2);
	DLlist->deleteNode(4);
	cout <<"Testing deleteNode(): expecting 5, and the result is: " << (DLlist->front()) << endl;
	DLlist->deleteNode(5);
	cout <<"Testing empty() method: expecting True, and the result is: " << (DLlist->empty()? "True":"False") << endl;

	return 0;
}
