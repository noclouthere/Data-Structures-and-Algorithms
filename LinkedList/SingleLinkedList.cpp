//
// Created by Miguel Mendoza on 2019-11-25.
//

#include "SingleLinkedList.h"
using namespace std;

void SingleLinkedList::set_head_ptr(Node *newLink) {


}
//list_length returns the length of the linked list
size_t SingleLinkedList::list_length(const Node *head_ptr) {
    // Declare a node pointer and point it to the same thing the head_ptr is pointing to.
    const Node* red_ptr_1 = head_ptr;
    // set up a counter
    size_t counter = 0;
    if (red_ptr_1 == NULL){
        return 0;
    }
    // While the red_ptr_1 link is not null
    // move down the linked list
    else{
        while(red_ptr_1->getLink() != NULL){
            red_ptr_1 = red_ptr_1->getLink();
            counter++;
        }
        counter++;
        return counter;
    }


}

void SingleLinkedList::list_append(const Node::value_type &entry) {
    // First Case: Empty List
    if(head_ptr == NULL){
        // Create the new node and add it to the list
        head_ptr = new Node(entry, NULL);
    }
    // Second Case: One or more items in the list
    else{
        Node* cursor;
        for (cursor = head_ptr; cursor->getLink() != NULL; cursor = cursor->getLink()) {
        }
        cursor->setLink(new Node(entry, NULL));
    }
}

void SingleLinkedList::list_head_insert(Node *&head_ptr, const Node::value_type &entry) {
    //First Case: Empty List
    if(head_ptr == NULL){
        head_ptr = new Node(entry, head_ptr);
    }
}

void SingleLinkedList::list_insert(Node *previous_ptr, const Node::value_type &entry) {
    // Step 1 Allocate a new node named insert_ptr
    // Step 2 Place the new entry in the new node
    // Step 3 Link the insert_ptr to the node after the previous_ptr
    Node* insert_ptr = new Node(entry, previous_ptr->getLink());

    // Step 4  Link the previous_ptr to the new node
    previous_ptr->setLink(insert_ptr);

    // All four steps in one line
    //previous_ptr->setLink(new Node(entry, previous_ptr->getLink()));
}

Node *SingleLinkedList::list_search(Node *head_ptr, const Node::value_type &target) {
    // Step 1
    Node* cursor;
    if(head_ptr != NULL) { // handles empty list
        for (cursor = head_ptr; cursor->getLink() != NULL; cursor = cursor->getLink()) {
            if (cursor->getData() == target) {
                return cursor;
            }
        }
    }
    return nullptr;
}

const Node *SingleLinkedList::list_search(const Node* head_ptr, const Node::value_type& target) {
    const Node* cursor;
    for (cursor = head_ptr; cursor != NULL; cursor = cursor->getLink()) {
        if(target == cursor->getData()){
            return cursor;
        }
    }

    return nullptr;
}

Node *SingleLinkedList::list_locate(Node* head_ptr, size_t position) {
    Node* cursor;
    for (int i = 1; (i < position) && (cursor != NULL) ; ++i) {
        cursor = cursor->getLink();
    }
    return cursor;
}

const Node *SingleLinkedList::list_locate(const Node *head_ptr, size_t position) {
    const Node* cursor;
    for (int i = 1; i < position && cursor != NULL ; ++i) {
        cursor = cursor->getLink();
    }
    return cursor;
}

void SingleLinkedList::list_head_remove(Node *&head_ptr) {
    //Set up a temporary node pointer
    Node* temp_ptr = head_ptr;
    //Reassign the head_ptr to get_link()
    head_ptr = head_ptr->getLink();
    //Delete the temporary node pointer
    delete temp_ptr;
}

void SingleLinkedList::list_remove(Node *previous_ptr) {
    // Set up a temporary node pointer that points to the link of the previous_ptr
    Node* remove_ptr = previous_ptr->getLink();
    // Reassign the previous_ptr to the node after the next node
    previous_ptr->setLink(remove_ptr->getLink());
    //Delete the temporary node pointer
    delete previous_ptr;
}

void SingleLinkedList::list_clear(Node *&head_ptr) {
    while (head_ptr!=NULL){
        list_head_remove(head_ptr);
    }
}

void SingleLinkedList::print_screen(Node *head_ptr, Node::value_type x, Node::value_type y) {
    //Define x and y node pointers
    Node* x_ptr;
    Node* y_ptr;
    //Set x_ptr and y_ptr = to list_search
    x_ptr = list_search(head_ptr, x);
    y_ptr = list_search(head_ptr, y);
    //Loops through x and y and prints everything in between
    for (Node* cursor = x_ptr; cursor != y_ptr; cursor = cursor->getLink()) {
        //prints the nodes to the screen
        cursor = cursor->getLink();
    }
}

void SingleLinkedList::rep_remove(Node *head_ptr, Node::value_type a) {
    Node* cursor;
    for (cursor = head_ptr; cursor != NULL; cursor = cursor->getLink()) {
        //case that the head_ptr data is equal to a
        if (a == head_ptr->getLink()->getData()){
            list_head_remove(head_ptr);
        }
        //case that the next node data is equal to a
        else if(a == cursor->getLink()->getData()){
            list_remove(cursor);
        }
    }
}

void SingleLinkedList::reverse(Node *&head_ptr) {
    //Sets the cursor to the head_ptr
    Node* cursor = head_ptr;
    //Sets the previous pointer to null
    Node* previous_ptr = NULL;
    //Sets the next pointer to null
    Node*  next_ptr = NULL;
    
    for (Node* cursor = head_ptr; cursor != NULL; cursor->getLink()) {
        //Points to the second node in the list
        next_ptr = cursor->getLink();
        //Reverses the current nodes pointer
        cursor = previous_ptr;
        //previous_ptr = cursor->getLink();

        //Moves the pointers one step forward
        previous_ptr = cursor;
        cursor = next_ptr;
    }
    head_ptr = previous_ptr;
}



