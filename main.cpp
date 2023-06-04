#include "list.h"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    List list;
    
    list.insert(5);
    list.insert(15);
    list.insert(55);
    list.insert(17);
    list.insert(99);
    list.print_list();
    short elementAmount = list.count_elements();
    cout << "List has " << elementAmount << " elements." << endl;
    list.append(50);
    list.print_list();

    return EXIT_SUCCESS;
}
