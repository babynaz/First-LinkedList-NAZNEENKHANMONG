#include <iostream>
using namespace std;
#include "node.h"

typedef int integer;


typedef node* nodePtr;
 int main() 
{
  //1.Delete a, b, c
  //2.Connect them the same way using new
  //3.Change to loop
  int x=5;
  node *head, *temp;
  head = new node;
  temp = head;
    temp->value = x;
    int i;
  for(i=0; i<50; i++)
    {
      temp->next = new node;
      temp = temp->next; 
      temp->value = x+2*i;
    }
  temp->next=NULL;
  /*
  a.value = x;
  a.next = &b;
  head = &a;
  b.value = head->value+3; // (*head).value  a.value
  node* temp = head; //temp is a pointer
  cout <<"A is "<<temp->value<<endl;
  cout<<"B is "<<temp->next->value<<endl;
  connect b to c
  //1. using b
  //b.next = &c;
  //2. using a
  //a.next->next = &c;
  3. uisng temp
  temp->next->next = &c; //next of a -> next of b is C
  c.value = 11;
  cout<<"C is "<<temp->next->next->value<<endl; //should print 11
*/   


//print in a loop using temp
  temp = head;
  //for(i=0; i<3; i++)
  while(temp!=NULL)
  { //while(temp)
    cout<<"Temp value is "<<temp->value<<endl;
    temp = temp->next;

   }

  temp = head;
  for(i=0; i<3; i++)
    {
      head = head->next;
      cout<<temp->value<<" gone"<<endl;
      delete temp;
      temp = head;
    }

   
  
   
}