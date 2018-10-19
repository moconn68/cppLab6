#ifndef NULL
#define NULL 0
#endif

#ifndef INT_DLL_NODE
#define INT_DLL_NODE
#include <iostream>
class intDLLNode{
	friend class intDLList;
	friend class LLQueue;
	friend class LLStack;

	public:
		intDLLNode(int el = 0, intDLLNode *nPtr = NULL, intDLLNode *pPtr = NULL){
			info = el;
			next = nPtr;
			prev = pPtr;
		}
	protected:
		int info;
		intDLLNode *prev,*next;
};
#endif
		