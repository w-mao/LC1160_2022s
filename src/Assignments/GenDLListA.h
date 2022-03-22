/*
 * 	Assignment #2, CPSC 1160 (25 points)
 *
 *	Author: Your Name
 *  	Comments : Describe what the code is doing in your own words.
 *	Add comments to those lines that need explanations.
 *  	[5 points]
 */

#ifndef ASSIGNMENTS_GENDLLISTA_H_
#define ASSIGNMENTS_GENDLLISTA_H_


template<class T>
class DoublyLinkedListA;

template<class T>
class DLLNodeA {
public:
	DLLNodeA() {
		next = prev = nullptr;
	}
	DLLNodeA(const T& el, DLLNodeA *n = nullptr, DLLNodeA *p = nullptr) {
		info = el; next = n; prev = p;
	}
private:
	T info;
	DLLNodeA *next, *prev;
	friend class DoublyLinkedListA<T>;
};

template<class T>
class DoublyLinkedListA {
public:
	DoublyLinkedListA() {
		head = tail = nullptr;
	}
	void addToDLLTail(const T&);
	T deleteFromDLLTail();

	bool empty() const; // is list empty?  (3 points)
	T front() const; // return front element  (3 points)
	bool isInList(T) const; // is a node within the list  (6 points)
	void deleteNode(T); // delete a node (8 points)

protected:
	DLLNodeA<T> *head, *tail;
};


template<class T>
void DoublyLinkedListA<T>::addToDLLTail(const T& el) {
	if (tail != nullptr) {
		tail = new DLLNodeA<T>(el,nullptr,tail);
		tail->prev->next = tail;
	}
	else head = tail = new DLLNodeA<T>(el);
}

template<class T>
T DoublyLinkedListA<T>::deleteFromDLLTail() {
	T el = tail->info;
	if (head == tail) { // if only one node in the list;
		delete head;
		head = tail = nullptr;
	}
	else { // if more than one node in the list;
		tail = tail->prev;
		delete tail->next;
		tail->next = nullptr;
	}
	return el;
}

/*
 * Your code
 */

#endif /* ASSIGNMENTS_GENDLLISTA_H_ */
