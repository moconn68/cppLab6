#ifndef EMPTY_LIST
#define EMPTY_LIST -1
#endif
#ifndef LL_QUEUE
#define LL_QUEUE

#include "intDLList.h"
#include <iostream>

using namespace std;
class LLQueue{
	friend class intDLList;
	public:
		LLQueue(){};
		void enqueue(int el){
			lst.addToTail(el);
		}
		int dequeue(){
			return lst.deleteFromHead();
		}
		void printQueue(){
			if(!lst.isEmpty()){
				cout << "Contents of the queue, first element first: ";
				intDLLNode *tmp;
				for(tmp = lst.head; tmp != NULL; tmp = tmp->next){
					cout << tmp->info << ", ";
				}//for
				cout << endl;
			}//if
			else throw(EMPTY_LIST);
		}
		void clear(){
			while(!lst.isEmpty()) lst.deleteFromHead();
		}
		~LLQueue(){
			clear();
		}
	private:
		intDLList lst;


};//class LLQueue

#endif