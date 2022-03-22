#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define loop(n) for(int i = 0; i < n; i++)

struct Mahasiswa{
	char name[100];
	int age;
	
	void print(){
		printf("%20s %3d\n", name, age);
	}	
};

struct node{
	int num;
	struct node *next;
}*head = NULL, *tail = NULL;

struct node *createNode(int num){
	struct node *newNode = (struct node*) malloc (sizeof(struct node));
	newNode->num = num;
	newNode->next = NULL;
	
	return newNode;
}

void pushHead(int num){
	struct node *newNode = createNode(num);
	if(head == NULL){
		head = tail = newNode;
	}
	else{
		newNode->next = head;
		head = newNode;
	}
}

void pushTail(int num){
	struct node *newNode = createNode(num);
	if(head == NULL){
		head = tail = newNode;
	}
	else{
		tail->next = newNode;
		tail = newNode;
	}
}

void pushMid(int num){
	struct node *newNode = createNode(num);
	if(head == NULL){
		head = tail = newNode;
	}
	else if(head->num >= num) pushHead(num);
	else if(tail->num <= num) pushTail(num);
	else{
		struct node *curr = head;
		while(curr != NULL && curr->next->num < num){
			curr = curr->next;
		}
		newNode->next = curr->next;
		curr->next = newNode;
	}
}

void popHead(){
	if(head == NULL) return;
	else if(head == tail){
		free(head);
		head = tail = NULL;
	}
	else{
		struct node *temp = head;
		head = head->next;
		free(temp);
	}
}

void popTail(){
	if(head == NULL) return;
	else if(head == tail){
		free(head);
		head = tail = NULL;
	}
	else{
		struct node *curr = head;
		while(curr->next != tail){
			curr = curr->next;
		}
		free(tail);
		curr->next = NULL;
		tail = curr;
	}
}

void popMid(int num){
	if(head == NULL) return;
	else if(head == tail){
		free(head);
		head = tail = NULL;
	}
	else{
		if(head->num == num) popHead();
		else if(tail->num == num) popTail();
		else{
			struct node *curr = head;
			while(curr != NULL && curr->next->num != num){
				curr = curr->next;
			}
			
			if(!curr){
				return;
			}
			else{
				struct node *temp = curr->next;
				curr->next = temp->next;
				free(temp);
			}
		}
	}
}

void view(){
	if(head == NULL) return;
	else{
		struct node *curr = head;
		while(curr){
			printf(" %d -> ", curr->num);
			curr = curr->next;
		}
	}
	printf("NULL\n");
}

int main(){
	
//	struct Mahasiswa binus[] = {
//		{"Udin", 10},
//		{"Budi", 15},
//		{"Ani", 18}
//	};
//	
//	loop(3){
//		binus[i].print();
//	}
	
	pushMid(1);
	pushMid(2);
	pushMid(3);
	pushMid(4);
	pushMid(5);
	view();
	
	popHead();
	popTail();
	popMid(3);
	view();
	
	return 0;
}

//mharvianto
