#ifndef INT_DL_LIST
#define INT_DL_LIST
#include <iostream>
#include "intDLLNode.h"
class intDLList{
	friend class LLStack;
	friend class LLQueue;
	public:
		intDLList(){
			head = tail = NULL;
		}
		~intDLList();
		int isEmpty(){
			return (head == NULL);
		}
		void addToHead(int el);
		void addToTail(int el);
		int deleteFromHead();
		int deleteFromTail();
		void deleteNode(int el);
		bool isInList(int el) const;

		void addSorted(int i);
		void printList();
	private:
		intDLLNode *head, *tail;
};
#endif