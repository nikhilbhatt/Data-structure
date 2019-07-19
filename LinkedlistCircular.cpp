#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};
node *insertnode(node *);
int main()
{
    int t,x,count=0;
    node *start=new node();
    start->data=0;       //a start node to count the no of nodes present in list
    start->next=NULL;
    cout<<"Enter no of elements to be inserted:";
    cin>>t;
    while(t--)
    {
        start->data++;
        start=insertnode(start);
    }
    x=start->data;
    start=start->next;
    while(count!=x)
    {
        cout<<start->data<<" ";
        start=start->next;
        count++;
    }
}
node *insertnode(node * ptr)
{
    node * temp=new node();
    cout<<"Enter value to insert";
    cin>>temp->data;
    if(ptr->next==NULL)
        {
            ptr->next=temp;
            temp->next=ptr;
            return ptr;
        }
        else
        {
            temp->next=ptr->next;
            ptr->next=temp;
            return ptr;
        }
}
