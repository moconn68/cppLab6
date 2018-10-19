#ifndef NULL
#define NULL 0
#endif
#ifndef EMPTY_LIST
#define EMPTY_LIST -1
#endif
#include <iostream>
#include "intDLList.h"
#include "intDLLNode.h"
using namespace std;
intDLList::~intDLList(){
	for(intDLLNode *p; !isEmpty(); ){
		p = head->next;
		delete head;
		head = p;
	} //for
}
void intDLList::addToHead(int el){
	head = new intDLLNode(el,head);
	if(tail == NULL) tail = head;
}
void intDLList::addToTail(int el){
	if(tail != NULL){//if list is not empty
		tail = new intDLLNode(el,NULL,tail);
		tail->prev->next = tail;
	}
	else head = tail = new intDLLNode(el);
}
int intDLList::deleteFromHead(){
	if(!isEmpty()){
		int el = head->info;
		intDLLNode *tmp = head;
		if(head == tail){ //only 1 node in list
			head = tail = NULL;
		}
		else{
			head = head->next;
		}
		delete tmp;
		return(el);
	}
	else throw(EMPTY_LIST);
}
int intDLList::deleteFromTail(){
	if(!isEmpty()){
		int el = tail -> info;
		if(head == tail){ //1 node in list
			delete tail;
			head = tail = NULL;
		}
		else{//this part is changed from IntSLList - more than 1 node
			tail = tail->prev;
			delete tail-> next;
			tail->next = NULL;
		}
		return(el);
	}
	else throw(EMPTY_LIST);
}
void intDLList::deleteNode(int el){
	if(head !=NULL){//nonempty list
		if(head == tail && el == head->info){//if only 1 node is in list
			delete head;
			head = tail = NULL;
		}//if
		else if(el == head->info){//if more than 1 node in list & el is in head
			intDLLNode *tmp = head;
			head = head-> next;
			delete tmp;
		}//else if
		else{//>1 node in list, el not in head
			intDLLNode *pred, *tmp;
			for(pred = head, tmp = head->next;
				tmp != NULL && tmp->info != el;
			    pred = pred->next,tmp = tmp->next); //end of for
			if(tmp != NULL){
				pred->next = tmp->next;
			}//if
			if(tmp == tail) tail = pred;
			delete tmp;
		}//else
	}//if
}//function

/*bool intDLList::isInList(int el) const {
	intDLLNode *tmp;
	for(tmp = head; tmp !=NULL && tmp->info != el;tmp = tmp-> next);
	return (tmp !=NULL);
}*/ // this function is not needed
	
void intDLList::addSorted(int i){ 
	intDLLNode* newNode = new intDLLNode(i);//new node to be inserted
	int x;
	if(!isEmpty()){
		if(head == tail){//there is only one node in the list
			if(i > head->info){//new value is greater than what's in current node
				addToTail(i);
			}//if
			else{
				addToHead(i);//new value is less than current node
			}//else
		}//if head == tail
		else{//>1 node currently in list
			if(i<head->info){//works
				addToHead(i);
			}//if i<head->info
			else if(i > tail->info){//works
				addToTail(i);
			}//else if
			else{//works
				intDLLNode *tmp = head;
				for(; tmp->next != NULL && tmp->next->info < newNode-> info;
				    tmp = tmp->next);
				newNode->next = tmp->next;
				if(tmp->next != NULL) newNode->next->prev = newNode;
				tmp->next=newNode; newNode->prev = tmp;					
			}//else
		}//else >1 node currently in list
	}//if !isEmpty()
	else{//if list is empty
		addToHead(i);
	}//else

}//function

void intDLList::printList(){
	if(!isEmpty()){
		cout << "Contents of the list: ";
		intDLLNode *tmp;
		for(tmp = head; tmp != NULL; tmp = tmp->next){
			cout << tmp->info << ", ";
		}//for
		cout << endl;
	}//if
	else throw(EMPTY_LIST);
}//function

	