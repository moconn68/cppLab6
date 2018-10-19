#ifndef EMPTY_LIST
#define EMPTY_LIST -1
#endif
#ifndef LL_STACK
#define LL_STACK

#include "intDLList.h"
#include "intDLLNode.h"
#include <iostream>


using namespace std;
class LLStack{
	public:
		LLStack(){};
		void clear(){
			while(!lst.isEmpty()) lst.deleteFromHead();
		}
		int pop(){
			return(lst.deleteFromHead());
		}
		void push(const int el){
			lst.addToHead(el);
		}
		void printStack(){ //
			if(!lst.isEmpty()){
				cout << "Contents of the stack, last element first: ";
				intDLLNode *tmp;
				for(tmp = lst.head; tmp != NULL; tmp = tmp->next){
					cout << tmp->info << ", ";
				}//for
				cout << endl;
			}//if
			else throw(EMPTY_LIST);
		}
	private:
		intDLList lst;
};//class LLStack

#endif