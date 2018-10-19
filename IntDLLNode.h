#ifndef NULL
#define NULL 0
#endif

class IntDLLNode{
	friend class IntDLList;

	public:
		IntDLLNode(int el = 0, IntDLLNode *nPtr = NULL, IntDLLNode *pPtr = NULL){
			info = el;
			next = nPtr;
			prev = pPtr;
		}
	protected:
		int info;
		IntDLLNode *prev,*next;
};
		