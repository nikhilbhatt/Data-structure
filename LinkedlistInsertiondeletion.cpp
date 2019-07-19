#include <bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};
void display(node *);
node *insertnodesp(node *);
node *deletenode(node *);
int main()
{
    node *start=NULL,*temp;
    int t,x=0;
    do
    {

        cout<<"Enter your choice:\n1.Insertion\n2.Deletion:";
        cin>>x;
        if(x==1)
        {
            start=insertnodesp(start);
            cout<<"List after operation:\n";
            display(start);
            cout<<endl;
        }
        if(x==2)
        {
             start=deletenode(start);
             cout<<"List after operation:\n";
             display(start);
             cout<<endl;
        }

    }while(x==1||x==2);
    return 0;
}
node *insertnodesp(node * ptr)
{
    int pos,var=1;
    node *temp=new node(),*nvr,*start;
    start=ptr;
    cout<<"Enter Position: ";
    cin>>pos;
    cout<<"Enter Value: ";
    cin>>temp->data;
    if(pos<=1||ptr==NULL)
    {
       temp->next=ptr;
       ptr=temp;
       return ptr;
    }
    else
        {
           while(var<pos&&ptr!=NULL)
             {
                  nvr=ptr;
                  ptr=ptr->next;
                  var++;
              }
           if(pos>=var&&pos!=1)
              {
                   ptr=nvr;
              }
            temp->next=ptr->next;
            ptr->next=temp;
            return start;
          }
}
void display(node * temp)
{
    while(temp!=NULL)
    {
         cout<<temp->data<<" ";
         temp=temp->next;
    }
}
node *deletenode(node * del)
{
    int pos,value=1;
    node *prev,*start;
    start=del;
    if(del==NULL)
    {
        cout<<"Empty list"<<endl;
        return del;
    }
    cout<<"Enter position of element to be deleted: ";
    cin>>pos;
    if(start->next==NULL||pos<=1)
    {
        cout<<"deleted element is "<<del->data<<" remaining array list";
        del=del->next;
        free(del);
        return del;
    }
    else
    {
        while(value<pos&&del->next!=NULL)
        {
           prev=del;
           del=del->next;
           value++;
        }
        if(pos<=value)
        {
            cout<<"Deleted element is "<<del->data<<" ";
            prev->next=del->next;
            free(del);
            return start;
        }
        else
        {
            cout<<"Can't perform delete operation"<<endl;
            return start;
        }
    }
}
