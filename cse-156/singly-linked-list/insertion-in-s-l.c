/*

implementation of singly list
implementation of insertion

author : muhaimin kamran
read : https://www.geeksforgeeks.org/c-program-to-implement-singly-linked-list/


*/

#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// nicher function notun node toiri kore
struct Node* makeNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    // (struct Node*) => type creating kora hoiche
    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

struct Node* head = NULL;
struct Node* tail = NULL;

/*
    head / tail globally decalew na korle nicher niyome parameter set korte hobe
    
    void insertHead(struct Node** head, int data)
    void insertTail(struct Node** head, int data)
    void insertPos(struct Node** head, int data)
    
    */
void insertHead(int data) {
    
    struct Node* newNode = makeNode(data);
    if(head == NULL) {
        // head tail duitai null
        head = tail = newNode;
    } 
    else {
        newNode->next = head;
        head = newNode;
    }
}

void insertTail(int data) {
    struct Node* newNode = makeNode(data);
    
    if(tail == NULL) {
        // head tail duitai null
        head = tail = newNode;
    } 
    else {
        tail->next = newNode;
        tail = newNode;
    }
}

void insertAfter(int target, int data) {
    struct Node* temp = head;
    while(temp != NULL && temp->data != target) {
        temp = temp->next;
    }

    if(temp == NULL) {
        // target khuje na pele tail e insert korbe
        insertTail(data);
    } 
    else {
        struct Node* newNode = makeNode(data);
        newNode->next = temp->next;
        // ei kaj age na kore list er porer ongsho haraye jabe
        temp->next = newNode;
        if(temp == tail) {
            tail = newNode;
        }
    }
}

void insertAtPos(int pos, int data) {
    if(pos <= 0) return; // 0 base indexing
    struct Node* temp = head;
    for(int i = 0; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if(temp == NULL) {
        // position dure, tai tail e insert hobe
        insertTail(data);
    } 
    else {
        struct Node* newNode = makeNode(data);
        newNode->next = temp->next;
        temp->next = newNode;

        if(temp == tail) {
            tail = newNode;
        }
    }
}

void printList() {
    struct Node* temp = head;
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


int main() {

    insertHead(10);
    insertAfter(10, 13);
    insertAtPos(1, 11);
    insertTail(12);
    printList();
    
}