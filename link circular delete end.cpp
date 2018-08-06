#include<iostream>
using namespace std;
struct node
{
int data;
node *next;
};
int main()
{
node *head,*tail,*temp;
int n,i,ele, data1;
head=NULL;
tail=NULL;
cout<<"enter the no of nodes";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"enter the data to store in"<<i<<"node";
cin>>data1;
node *temp=new node;
temp->data=data1;
temp->next=head;
if(head==NULL)
{
head=temp;
tail=temp;
}
else
{
tail->next=temp;
tail=tail->next;
}


}

node *temp1;
node *prev;

temp1=head;
while(temp1->next!=head)
{
    prev=temp1;
    temp1=temp1->next;
}
prev->next=NULL;

delete temp1;
node *ptr;
ptr=head;
while(ptr->next!=head)
{
cout<<ptr->data;
cout<<" "<<ptr->next<<endl;
ptr=ptr->next;
}
cout<<ptr->data<<" "<<ptr->next;
}

