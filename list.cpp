#include "list.h"
#include "node.h"
#include <new>
#include <iostream> //DEBUG
using namespace std;


List::List()    //Default constructor
{
    head = NULL;
}
List::List(Node* firstNode) //Custom constructor
{
    firstNode->next = NULL;
    head = firstNode;
}
void List::append(int newData)
{
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = NULL;
    if (head == NULL)       //If list is empty, newNode becomes first node
    {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL)  //Iterate through the list
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
short List::count_elements()
{
    short amount = 0;
    Node* counter = head;
    while(counter != nullptr)
    {
        amount++;
        counter = counter->next;
    }
    free(counter);
    return amount;
}
void List::print_list()
{
    Node* temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    }while (temp != NULL);
    cout << endl;
    free(temp);
}
void List::insert(int newData)
{
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
}