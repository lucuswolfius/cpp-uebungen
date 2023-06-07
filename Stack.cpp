#include "Stack.h"
#include "list.h"
#include <iostream>
using namespace std;

Stack::Stack():topNode(stackList.head)
{
    cout << "Stack object created!" << endl;
}
void Stack::push(int newData)
{
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = stackList.head;
    stackList.head = newNode;
}
int Stack::pop()
{
    Node* temp = stackList.head;
    int data = stackList.head->data;
    stackList.head = stackList.head->next;
    free(temp);
    return data;
}
void Stack::print()
{
    if (stackList.head == NULL)
    {
        cout << "Stack is empty!" << endl;
        return;
    }
    Node* temp = stackList.head;
    cout << "Your stack:" << endl;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
void Stack::delete_stack()
{
    Node* current = stackList.head;         // Set a pointer to list.head
    while (current != nullptr)              // Iterate as long as this pointer != NULL
    {
        Node* temp = current;               // Create a temp thats equal to current
        current = current->next;            // Iterate the current pointer
        delete temp;                        // Delete the temp pointer
    }
    stackList.head = nullptr;               // Set the stack.head to NULL to flag it as empty
    cout << "Stack deleted!" << endl;
}
