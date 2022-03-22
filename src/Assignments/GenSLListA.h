// Assignment #7, CPSC 1160
// #descibe what the code is doing in your own words#
// by #your name here#
// 5 points for comments
// 10 points for void addToTail(const E& e); // add to tail of list
// 10 points for void removeFromTail(); // remove tail item of list

#ifndef ASSIGNMENTS_GENSLLIST_H_
#define ASSIGNMENTS_GENSLLIST_H_


template <typename E>
class SLinkedListA;

template <typename E>
class SNode { // singly linked list node
private:
	E elem; // linked list element value
	SNode<E>* next; // next item in the list
	friend class SLinkedListA<E>; // provide SLinkedListA with access to private, protected and public members of SNode.
	friend int testGenSLList();
};

template <typename E>
class SLinkedListA { // a singly linked list
public:
	SLinkedListA(); // empty list constructor
	~SLinkedListA(); // destructor
	bool empty() const; // is list empty?
	const E& front() const; // return front element
	void addFront(const E& e); // add to front of list
	void removeFront(); // remove front item list
	void addToTail(const E& e); // add to tail of list
	void removeFromTail(); // remove tail item of list
private:
	SNode<E>* head; // head of the list
	friend int testGenSLList();
};

template <typename E>
SLinkedListA<E>::SLinkedListA() // constructor
: head(nullptr) { }

template <typename E>
bool SLinkedListA<E>::empty() const // is list empty?
{ return head == nullptr; }

template <typename E>
const E& SLinkedListA<E>::front() const // return front element
{ return head->elem; }

template <typename E>
SLinkedListA<E>::~SLinkedListA() // destructor
{ while (!empty()) removeFront(); }

template <typename E>
void SLinkedListA<E>::addFront(const E& e) { // add to front of list
	SNode<E>* v = new SNode<E>; // create new node
	v->elem = e; // store data
	v->next = head; // head now follows v
	head = v; // v is now the head
}

template <typename E>
void SLinkedListA<E>::removeFront() { // remove front item
	SNode<E>* old = head; // save current head
	head = old->next; // skip over old head
	delete old; // delete the old head
}

/*
 * Your code.
 */

template <typename E>
void SLinkedListA<E>::addToTail(const E& e) { // add to tail of list
	SNode<E>* tail; // tail equals to head
	if (head != nullptr){ // not an empty linked list
		for (tail = head; tail->next != nullptr; tail = tail->next);

		SNode<E>* v = new SNode<E>; // create new node
		v->elem = e; // store data
		v->next = nullptr; // head now follows v
		tail->next = v;
		//tail = v; // v is the new tail
	}else{
		head = new SNode<E>;
		head->elem = e; // store data
		head->next = nullptr; // head now follows v
	}

}

template <typename E>
void SLinkedListA<E>::removeFromTail() { // remove front item
	if (head != nullptr) { // if nonempty list;
		if (head->next == nullptr) { // if only one node in the list;
			delete head;
			head = nullptr;
		}else{ // if more than one node in the list,
			SNode<E>* tail; // tail equals to head
			for (tail = head; tail->next->next != nullptr; tail = tail->next);
			delete tail->next;
			tail->next = nullptr;
		}
	}
}


#endif
