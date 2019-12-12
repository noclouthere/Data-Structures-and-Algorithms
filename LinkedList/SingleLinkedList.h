//
// Created by Miguel Mendoza on 2019-11-25.
//

#ifndef LINKEDLIST_SINGLELINKEDLIST_H
#define LINKEDLIST_SINGLELINKEDLIST_H

#include "Node.h"

class SingleLinkedList {
public:
    SingleLinkedList(){
        head_ptr = NULL;
    }
    const Node* get_head_ptr(){
        return head_ptr;
    }
    Node* get_head_ptr(int a){
        return head_ptr;
    }
    void set_head_ptr(Node* newLink);
    void list_append(const Node::value_type& entry);
    void list_head_insert(Node*& head_ptr, const Node::value_type& entry);
    void list_insert(Node* previous_ptr, const Node::value_type& entry);
    size_t list_length(const Node* head_ptr);
    Node* list_search(Node* head_ptr, const Node::value_type& target);
    const Node* list_search(const Node* head_ptr, const Node::value_type& target);
    void list_head_remove(Node* &head_ptr);
    void list_remove(Node* previous_ptr);
    void list_clear(Node*& head_ptr);

    Node* list_locate(Node* head_ptr, size_t position);
    const Node* list_locate(const Node* head_ptr, size_t position);

private:
    Node* head_ptr;
};


#endif //LINKEDLIST_SINGLELINKEDLIST_H
