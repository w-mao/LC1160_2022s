/*
 * TestGenSLList.cpp
 *
 *  Created on: Jan. 28, 2022
 *      Author: mao
 */

#include <iostream>
#include "GenSLListA.h"
using namespace std;


int testGenSLList()
{
	cout << endl << "Singly Linked List: " << endl;
	SLinkedListA<int> *SLlist = new SLinkedListA<int>();
	SLlist->addToTail(5);
	cout <<"Testing addToTail() method: expecting 5, and the result is: " << SLlist->front() << endl;
	SLlist->addToTail(4);
	cout <<"Testing addToTail() method: expecting 5, and the result is: " << SLlist->front() << endl;
	SLlist->addToTail(3);
	cout <<"Testing addToTail() method: expecting 5, and the result is: " << SLlist->front() << endl;

	SLlist->addToTail(2);
	SLlist->addToTail(1);
	SLlist->removeFromTail();
	SLlist->removeFromTail();
	cout <<"Testing removeFromTail() method: expecting 5 4 3, and the result is: ";
	for(SNode<int>* tmp = SLlist->head; tmp != nullptr; tmp=tmp->next)
		cout << tmp->elem << " ";
	cout << endl;
	SLlist->removeFromTail();
	SLlist->removeFromTail();
	SLlist->removeFromTail();
	cout <<"Testing removeFromTail() method: expecting True, and the result is: " << (SLlist->head == nullptr ? "True":"False") << endl;
	SLlist->removeFromTail();
	cout <<"Testing is done!" << endl;
	return 0;
}
