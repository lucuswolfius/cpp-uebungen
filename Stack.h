#ifndef STACK_H
#define STACK_H
#include "list.h"

class Stack
{
    private:
    Node* topNode;
    List stackList;

    public:
    Stack();
    void push(int newData);
    int pop();
    void delete_stack();
    void print();

};

#endif