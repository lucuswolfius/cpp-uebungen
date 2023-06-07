#include <iostream>
#include "Stack.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Stack newStack;

    newStack.print();
    newStack.push(10);
    newStack.push(50);
    newStack.push(52);
    newStack.push(38);
    newStack.push(95);
    newStack.print();
    cout << "Popped element: " << newStack.pop() << endl;
    newStack.print();
    newStack.delete_stack();
    newStack.print();
    return 0;
}
