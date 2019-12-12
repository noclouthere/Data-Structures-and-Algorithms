//
// Created by Miguel Mendoza on 2019-11-25.
//

#ifndef LINKEDLIST_NODE_H
#define LINKEDLIST_NODE_H
#include <cstdlib>


class Node {

public:
    typedef double value_type;
    Node(){
        data = 0;
        link = NULL;
    };

    Node(const value_type& init_data = value_type(), Node* init_link = NULL){
        link = init_link;
        data = init_data;
    }

    ~Node() = default;

    value_type getData()const{
        return data;
    }

    const Node* getLink() const{
        return link;
    }

    Node* getLink(){
        return link;
    }

    void setLink(Node* newLink){
        link = newLink;
    }

private:
    value_type data;
    Node *link;
};


#endif //LINKEDLIST_NODE_H
