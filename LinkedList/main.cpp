#include <iostream>
#include "SingleLinkedList.h"
using namespace std;
int main() {
    std::cout << "Hello, Node!" << std::endl;

//    Node myNode(7.123456);
//    Node second(3.14159);
//    Node third(9.85);
//
//    cout << myNode.getData() << endl;
//
//    Node* head;
//
//    head = &myNode;
//    head->setLink(&second);
//    head->getLink()->setLink(&third);
//
//
//    cout << "The head pointer points to memory address " << head << endl;
//
//    cout << "The data in the node that the head pointer points to is " << head->getData() << endl;
//
//    cout << "The data in the second node " << head->getLink()->getData() << endl;
//
//    cout << "The data in the third node " << head->getLink()->getLink()->getData() << endl;

    SingleLinkedList L1;

    //Test list_insert on empty list
    cout << (L1.list_search(L1.get_head_ptr(5), 2)) << endl;

    L1.list_append(7.77);
    L1.list_append(8.88);

    cout << L1.list_length(L1.get_head_ptr()) << endl;

    return 0;
}