//Matthew O'Connell
//ECE 2620-001
//Lab 6

#include <iostream>
#include "intDLLNode.h"
#include "intDLList.h"
#include "LLQueue.h"
#include "LLStack.h"

#ifndef EMPTY_LIST
#define EMPTY_LIST -1
#endif
using namespace std;

void printStart();
void printL1();
void printL2();
void printL3();
void printL4();


int main()
{
	printStart();
	int sel1=0,sel2=0,listInt,stackInt,queueInt, element;
	cin >> sel1;
	if(sel1 !=5){
		intDLList list;
		LLQueue queue;
		LLStack stack;
		switch(sel1){
			case 1://unsorted list
				printL1();
				//cin >> sel2;
				while(sel2!=7){
					if(sel2 !=0)printL1();
					cin >> sel2;
					if(sel2!=7){
						switch(sel2){
							case 1:
								cout << "Enter integer: " << endl;
								cin >> listInt;
								list.addToHead(listInt);
								break;
							case 2:
								cout << "Enter integer: " << endl;
								cin >> listInt;
								list.addToTail(listInt);
								break;
							case 3:
								try{
									element = list.deleteFromHead();
									cout << "Item deleted: " << element << endl;
								}//try
								catch(int err_code){
									if(err_code = EMPTY_LIST){
										cerr << "Error: list is empty" << endl;
										break;
									}//if
									else{
										cerr << "Error: " << err_code << endl;
										break;
									}//else
								}//catch
									
								break;
							case 4:
								try{
									element = list.deleteFromTail();
									cout << "Item deleted: " << element << endl;
								}//try
								catch(int err_code){
									if(err_code = EMPTY_LIST){
										cerr << "Error: list is empty" << endl;
										break;
									}//if
									else{
										cerr << "Error: " << err_code << endl;
										break;
									}//else
								}//catch
								break;
							case 5:
								cout << "Enter integer to find and delete: " << endl;
								cin >> listInt;
								try{
									list.deleteNode(listInt);
								}
								catch(int err_code){
									if(err_code = EMPTY_LIST){
										cerr << "Error: list is empty" << endl;
										break;
									}//if
									else{
										cerr << "Error: " << err_code << endl;
										break;
									}//else
								}//catch
								break;
							case 6:
								try{list.printList();}
								catch(int err_code){
									if(err_code = EMPTY_LIST){
										cerr << "Error: list is empty" << endl;
										break;
									}//if
									else{
										cerr << "Error: " << err_code << endl;
										break;
									}//else
								}//catch
								break;
							default: //triggers if the user enters an invalid choice
		                        cout << "Please choose a valid option." << endl;
		                        break;
							
						}//switch
					}//if
				}//while
				break;
			case 2:
				printL2();
				//cin >> sel2;
				while(sel2!=4){
					if(sel2!=0)printL2();
					cin >> sel2;
					switch(sel2){
						case 1:
							cout << "Enter integer for sorted insertion: " << endl;
							cin >> listInt;
							list.addSorted(listInt);
							break;
						case 2:
							cout << "Enter integer to delete from list: " << endl;
							cin >> listInt;
							try{list.deleteNode(listInt);}
							catch(int err_code){
									if(err_code = EMPTY_LIST){
										cerr << "Error: list is empty" << endl;
										break;
									}//if
									else{
										cerr << "Error: " << err_code << endl;
										break;
									}//else
								}//catch
							break;
						case 3:
							try{list.printList();}
							catch(int err_code){
									if(err_code = EMPTY_LIST){
										cerr << "Error: list is empty" << endl;
										break;
									}//if
									else{
										cerr << "Error: " << err_code << endl;
										break;
									}//else
								}//catch
							break;
						default: //triggers if the user enters an invalid choice
                            cout << "Please choose a valid option." << endl;
                            break;
					}//switch
				}//while
				break;
			case 3:  //THIS IS FOR QUEUES, NOT FINISHED
				printL3();
				//LLQueue list;
				//cin >> sel2;
				while(sel2!=4){
					if(sel2!=0)printL3();
					cin >> sel2;
					switch(sel2){
						case 1:
							cout << "Enter integer for queue insertion: " << endl;
							cin >> listInt;
							queue.enqueue(listInt);
							break;
						case 2:
							try{
								element = queue.dequeue();
								cout << element << " was deleted from queue." << endl;
							}//try
							catch(int err_code){
								if(err_code = EMPTY_LIST){
									cerr << "Error: queue is empty" << endl;
									break;
								}//if
								else{
									cerr << "Error: " << err_code << endl;
									break;
								}//else
							}//catch
							break;
						case 3:
							try{queue.printQueue();}
							catch(int err_code){
								if(err_code = EMPTY_LIST){
										cerr << "Error: queue is empty" << endl;
										break;
								}//if
								else{
									cerr << "Error: " << err_code << endl;
									break;
								}//else
							}//catch
							break;
						default: //triggers if the user enters an invalid choice
                            cout << "Please choose a valid option." << endl;
                            break;
					}//switch
				}//while
				//...MORE HERE
				break;
			case 4: //THIS IS FOR STACKS
				printL4();
				//LLStack list;
				//cin >> sel2;
				while(sel2!=4){
					if(sel2!=0) printL4();
					cin >> sel2;
					switch(sel2){
						case 1:
							cout << "Enter integer for stack insertion: " << endl;
							cin >> listInt;
							stack.push(listInt);
							break;
						case 2:
							try{
								element = stack.pop();
								cout << element << " was deleted from the stack." << endl;
							}//try
							catch(int err_code){
								if(err_code = EMPTY_LIST){
									cerr << "Error: stack is empty" << endl;
									break;
								}//if
								else{
									cerr << "Error: " << err_code << endl;
									break;
								}//else
							}//catch
							break;
						case 3:
							try{stack.printStack();}
							catch(int err_code){
								if(err_code = EMPTY_LIST){
									cerr << "Error: stack is empty" << endl;
									break;
								}//if
								else{
									cerr << "Error: " << err_code << endl;
									break;
								}//else
							}//catch
							break;
						default: //triggers if the user enters an invalid choice
                            cout << "Please choose a valid option." << endl;
                            break;
					}//switch
				}//while
				break;
		}//switch
	}//if
	cout << "Exiting Program" << endl;	
	return 0;
}//main

