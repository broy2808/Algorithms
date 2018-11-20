#include <iostream>

using namespace std;

struct node{
  int data;
  node* next;
  node* prev;
};
struct node* head;

struct node* getnewnode(int x){
  struct node* newnode=new node();
  newnode->data=x;
  newnode->next=NULL;
  newnode->prev=NULL;
  return newnode;
}
void insertathead(int data){
   struct node* newnode=getnewnode(data);
   if (head==NULL){
     head=newnode;
     return;
   }
   head->prev=newnode;
   newnode->next=head;
   head=newnode;

}

void insertattail(int data){
   struct node* newnode=getnewnode(data);
   struct node* temp=head;
   if (temp==NULL) return;
   while (temp->next!=NULL){
   temp=temp->next;
   }
   temp->next=newnode;
   newnode->prev=temp;

}

void print(){
  struct node* temp=head;
  cout<<"The list is : \n";
  while (temp!=NULL){
  cout<<temp->data<<" ";
  temp=temp->next;
  }
 cout<<"\n";
}

void reversePrint(){
  struct node* temp=head;
  if (temp==NULL) return;

  while (temp->next!=NULL){
  temp=temp->next;
  }
  cout<<"The list is : \n";


  while (temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->prev;
  }
  cout<<"\n";
}

int main(){
head=NULL;
int n,x;
cout<<"how many numbers?\n";
cin>>n;
for (int i=0; i<n;i++){
  cout<<"Enter the number :"<<"\n";
  cin>>x;
  insertathead(x);
}
insertattail(39);
print();
reversePrint();
return 0;
}
