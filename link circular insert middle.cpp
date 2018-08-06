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

cout<<"insert in middle";
int pos;
cout<<"position";
cin>>pos;
temp=head;
for(i=1;i<(pos-1);i++)
{
    temp=temp->next;

}
node *n2=new node;
cout<<"enter data";
cin>>data1;
n2->data=data1;
n2->next=temp->next;
temp->next=n2;
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



