#include "schedule.h"
#include <stdlib.h>

struct node {
 	int value; 
	struct node* next; 
};

/**
 * Function to initialize any global variables for the scheduler.
 */
void init(){

}

/**
 * Function to add a process to the scheduler
 * @Param PCB * - pointer to the PCB for the process/thread to be added to the
 *      scheduler queue
 * @return true/false response for if the addition was successful
 */
int addProcess(PCB *process){
    return 0;
}

/**
 * Function to get the next process from the scheduler
 *
 * @Return returns the Process Control Block of the next process that should be
 *      executed, returns NULL if there are no processes
 */
PCB* nextProcess(){
	return NULL;
}

/**
 * Function that returns a boolean 1 True/0 False based on if there are any
 * processes still scheduled
 * @Return 1 if there are processes still scheduled 0 if there are no more
 *		scheduled processes
 */
int hasProcess(){
	return 0;
}


int main(){ 
	int i; 									// This will be the unchanging first node //
 	struct node root; 			// cur node for manipulating linked list // 
	struct node cur;  			// * Now root points to a node struct 
									  			//* Dynamic allocation of memory the size of * a node in C (similar to new node in C++) 
	root = (struct node) malloc( sizeof(struct node)); 
	cur = root; 
	for(i=0; i<10;i++){
		 cur->value = i; 
		 cur->next = (struct node) malloc( sizeof(struct node)); 
		 cur = cur->next; 
	} 										  //Create final values 
	cur->value = 10; 
	cur->next = NULL; 			// Now let’s print it out / 
	cur=root; 
  while(cur){ 
		 printf("%d ", cur->value); 
		 cur=cur->next; 
  } 
	printf("\n"); 					// Let’s free up memory / 
	while(root){ 
		 cur = root; 
		 root = root->next; free(cur); //like delete in C++ 
	}
} 
