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
cout<<"enter the data to store in "<<i<<"node ";
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

node *new1=new node;
cout<<"enter";
cin>>data1;
new1->data=data1;
new1->next=head;
head=new1;
temp=head;
tail->next=head;
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



