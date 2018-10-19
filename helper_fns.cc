#include <iostream>
using namespace std;
void printStart(){
	cout << "(1) Create Simple (Unsorted) List" << endl;
	cout << "(2) Create Sorted List" << endl;
	cout << "(3) Create Queue (FIFO)" << endl;
	cout << "(4) Create Stack (LIFO)" << endl;
	cout << "(5) Exit program" << endl;
}//function
void printL1(){
	cout << "(1) Enter integer for insertion at head of list" << endl;
	cout << "(2) Enter integer for insertion at tail of list" << endl;
	cout << "(3) Display and delete integer from head of list" << endl;
	cout << "(4) Display and delete integer from tail of list" << endl;
	cout << "(5) Search for integer in list, and delete that node" << endl;
	cout << "(6) Display contents of list from head to tail, in order" << endl;
	cout << "(7) Exit program" << endl;
}//function
void printL2(){
	cout << "(1) Enter integer for sorted insertion (increasing order) into list" << endl;
	cout << "(2) Search and delete integer, if present in list" << endl;
	cout << "(3) Display contents of sorted list of integers, in increasing order" << endl;
	cout << "(4) Exit program" << endl;
}//function
void printL3(){
	cout << "(1) ENQUEUE (Enter integer for insertion into queue)" << endl;
	cout << "(2) DEQUEUE (Display and delete integer from queue)" << endl;
	cout << "(3) PRINT QUEUE (Display queue contents without deleting anything, first element first)" << endl;
	cout << "(4) Exit program" << endl;
}//function
void printL4(){
	cout << "(1) PUSH (Enter integer for insertion into stack)" << endl;
	cout << "(2) POP (Display integer and delete it from stack)" << endl;
	cout << "(3) PRINT STACK (Display stack contents without deleting anything, last element first)" << endl;
	cout << "(4) Exit program" << endl;
}//function

