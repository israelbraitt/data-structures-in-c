#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// node structure
struct node{
    int element;
    struct node *next;
};

typedef struct node Node;

// create a node
Node* create_node(int data){
    Node *new = (Node*)malloc(sizeof(Node));
    new -> element = data;
    new -> next = NULL;
    return new;
}

// checks if the list is empty
bool is_empty(Node *list){
    if (list == NULL){
        return true;
    }else{
        return false;
    }
}

// insert a node at the top of the stack
Node* push(Node *list, int data){
    Node *new_node = create_node(data);
    
    if (list == NULL){
        new_node -> next = NULL;
        list = new_node;
    }else{
        Node *aux = list;
        while (aux -> next != NULL){
            aux = aux -> next;
        }
        new_node -> next = NULL;
        aux -> next = new_node;
    }
    
    return list;
}

// remove a node at the top of the stack
Node* pop(Node *list){
    Node *aux = list;
    Node *prev = NULL;
    
    while (aux != NULL){
        if (aux -> next == NULL){
            prev -> next = NULL;
        }
        prev = aux;
        aux = aux -> next;
    }
    
    return list;
}

// print the list elements
void show_list(Node *list){
    Node *aux = list;
    
    while (aux != NULL){
        printf("%d ", aux -> element);
        aux = aux -> next;
    }
    
}

// finds the node position (index) in the list
int find_position_node(Node *list, int data){
    Node *aux = list;
    int position = 0;
    
    while (aux != NULL){
        if (aux -> element == data){
            return position;
        }
        aux = aux -> next;
        position += 1;
    }
}


int main(){
    
    return 0;
}