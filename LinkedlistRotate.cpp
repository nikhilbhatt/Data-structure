#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
node *insertnode(node *);
node *rotatenode(node *,int);
int main()
{
    int t,k,n=0;
    node *start=NULL;
    cout<<"Enter no of elements to be inserted";
    cin>>t;
    while(t--)
    {
        n++;
        start=insertnode(start);
    }
    cout<<"Enter rotation";
    cin>>k;
    k=k%n;
    if(k!=0)
    start=rotatenode(start,k);
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
node *rotatenode(node *start,int k)
{
    int count=0;
    node *temp,*prev,*last;
    temp=start;
    last=start;
    while(count!=k)
    {
        prev=temp;
        temp=temp->next;
        count++;
    }
    while(last->next!=NULL)
    {
        last=last->next;
    }
    prev->next=last->next;
    last->next=start;
    return temp;
}
