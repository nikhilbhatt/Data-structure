#include<bits/stdc++.h>
using namespace std;
class node{
  public:
  int data;
  node *next;
};
void forwarddisplay(node *);
void backwarddisplay(node *);
node *insertnode(node *);
int main()
{
    int t;
    node * start=NULL;
    cout<<"Enter no of elements to be inserted:";
    cin>>t;
    while(t--)
    {
        start=insertnode(start);
    }
    cout<<"Forward list is: ";
    forwarddisplay(start);
    cout<<"\nBackward list is:";
    backwarddisplay(start);
}
node *insertnode(node *start)
{
    node *ptr=new node();
    cout<<"Enter Value to insert :";//just inserting the element at beginning only for insertion purpose
    cin>>ptr->data;
    ptr->next=start;
    return ptr;
}
void forwarddisplay(node *start)
{
    if(start==NULL)
        return;
    cout<<start->data<<" ";
    forwarddisplay(start->next);
}
void backwarddisplay(node * start)
{
    if(start==NULL)
        return;
        backwarddisplay(start->next);
    cout<<start->data<<" ";
}
