#include <iostream>
#include <string>

#include "LL.h"

int main(int argc, char *argv[])
{
    LinkedList linkedList;
    for (int i = 1; i < argc; i += 2)
    {
        int id = atoi(argv[i]);
        std::string name = argv[i + 1];
        linkedList.insertNode(id, name);
    }
    
    linkedList.printAll();
    linkedList.insertFront(0, "Z");
    linkedList.printAll();

    return 0;
}
