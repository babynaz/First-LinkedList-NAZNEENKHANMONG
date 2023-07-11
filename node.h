#include <iostream>
#include <string>

class ListNode {
private:
    int id;
    std::string name;

    ListNode *next = nullptr;

public:
    ListNode(int, std::string);

    std::string toString();

    ListNode *getNext();

    void setNext(ListNode *);

    ~ListNode();
};

ListNode::ListNode(int id, std::string name)
{
    this->id = id;
    this->name = name;
}

std::string ListNode::toString()
{
    return "(" + this->name + ", " + std::to_string(this->id) + ")";
}

ListNode *ListNode::getNext()
{
    return this->next;
}

void ListNode::setNext(ListNode *next)
{
    this->next = next;
}

ListNode::~ListNode()
{
    std::cout << this->name << " deleted" << std::endl;
}
