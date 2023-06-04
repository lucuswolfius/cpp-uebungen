#include "node.h"
#ifndef LIST_H
#define LIST_H

class List
{
    public:
    Node* head;

    List();
    List(Node* firstNode);
    void append(int newData);
    void insert(int newData);
    void print_list();
    short count_elements();
};

#endif