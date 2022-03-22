/*
 * LinkedListFun.cpp
 *
 *  Created on: Jan. 25, 2022
 *      Author: mao
 */

#include "GenSLListLab.h"

#include <iostream>
using namespace std;

/*
 * Print all the elements of a singly linked list.
 */

void printSLinkedList(SLinkedListLab<int> *tmpSLlist)
{
	/*
	 * Your Code
	 */

	if (tmpSLlist->head != nullptr){
		SNodeLab<int> *tmp;
		for (tmp = tmpSLlist->head; tmp != nullptr; tmp = tmp->next)
		{
			cout << tmp->elem << endl;
		}
		tmp = nullptr;
	}
}

/*
 * Concatenating two singly linked lists tmpSLlist1 and tmpSLlist2,
 * given only references to the first node (head) of each list,
 * into a single list tmpSLlist1 that contains all the nodes of
 * tmpSLlist1 followed by all the nodes of tmpSLlist2.
 * Determine the time complexity of the algorithm.
 */

void concatenateSLinkedList(SLinkedListLab<int> *tmpSLlist1, SLinkedListLab<int> *tmpSLlist2)
{
	/*
	 * Your Code
	 */

	if (tmpSLlist1->head != nullptr){
		SNodeLab<int> *tmp;
		for (tmp = tmpSLlist1->head; tmp->next != nullptr; tmp = tmp->next);
		tmp->next = tmpSLlist2->head;
	} else{
		tmpSLlist1->head = tmpSLlist2->head;
	}


}



int linkedListFun()
{
	cout << endl << "Singly Linked List: " << endl;

	SLinkedListLab<int> *SLlist1 = new SLinkedListLab<int>();
	// bool isempty = false;

	cout<< "Checking whether the initial list is empty: " << SLlist1->empty()<< endl;

	SLlist1->addFront(10);
	SLlist1->addFront(8);
	SLlist1->addFront(50);

	cout<< "Checking whether 50 is in the list before calling deleteFromHead(): " << SLlist1->front() << endl;
	SLlist1->removeFront();
	cout<< "Checking whether 50 is in the list after calling deleteFromHead(): " << SLlist1->front() << endl;

	printSLinkedList(SLlist1);


	SLinkedListLab<int> *SLlist2 = new SLinkedListLab<int>();

	SLlist2->addFront(9);
	SLlist2->addFront(5);
	SLlist2->addFront(0);

	concatenateSLinkedList(SLlist1, SLlist2);
	cout << "After concatenation: " << endl;
	printSLinkedList(SLlist1);

	return 0;
}

