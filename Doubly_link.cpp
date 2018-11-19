#include <iostream>

using namespace std;
//Reverse linked list using iterative method
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
  return newnode;//Return address of the new node created
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

void print(){
  struct node* temp=head;
  cout<<"The list is : \n";
  while (temp!=NULL){
  cout<<temp->data<<"\n";
  temp=temp->next;
  }
}

void reversePrint(){
  struct node* temp=head;
  if (temp==NULL) return;

  while (temp->next!=NULL){
  temp=temp->next;
  }
  cout<<"The list is : \n";


  while (temp!=NULL){
    cout<<temp->data<<"\n";
    temp=temp->prev;
  }
}

int main(){
head=NULL;
int n,x,y=1;
cout<<"how many numbers?\n";
cin>>n;
for (int i=0; i<n;i++){
  cout<<"Enter the number :"<<"\n";
  cin>>x;
  insertathead(x);
}
print();
reversePrint();
return 0;
}
