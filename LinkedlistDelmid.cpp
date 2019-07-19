#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void findmiddle(node *);
node *insertnode(node *);
int main()
{
    node *start=NULL;
    int t;
    cout<<"Enter no of elements to be inserted:";
    cin>>t;
    while(t--)
    {
        start=insertnode(start);
    }
    findmiddle(start);
    cout<<"List after deletion of midlle element:\n";
    while(start!=NULL)
    {
        cout<<start->data<<" ";
        start=start->next;
    }
}
node *insertnode(node *ptr)
{
    node *temp=new node();
    cout<<"Enter element: ";
    cin>>temp->data;
    temp->next=ptr;
    return temp;
}
void findmiddle(node *start)
{
    if(start==NULL)
        {
            cout<<"List is empty!!";
            return;
        }
    node *slow_ptr,*fast_ptr,*temp;
    slow_ptr=start;
    fast_ptr=start;
    while(fast_ptr!=NULL&&fast_ptr->next!=NULL)
    {
        temp=slow_ptr;
        slow_ptr=slow_ptr->next;
        fast_ptr=fast_ptr->next->next;
    }
    cout<<"middle element is:"<<slow_ptr->data<<endl;
    temp->next=slow_ptr->next;
    free(slow_ptr);
}
