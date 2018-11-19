#include <iostream>

using namespace std;
//Reverse linked list using iterative method
struct node{
  int data;
  node* next;
};
struct node* head;

void insert_any(int data,int n){
node* temp1=new node;
temp1->data=data;
temp1->next=NULL;

if(n==1){
temp1->next=head;
head=temp1;
return;
}
node* temp2= head;
for(int i=1;i<n-1;i++){//access previous node of n
temp2=temp2->next;
}

temp1->next=temp2->next;
temp2->next=temp1;

}

void print(){
  node* temp=head;
  cout<<"The list is : \n";
  while (temp!=NULL){
  cout<<temp->data<<"\n";
  temp=temp->next;
  }
}

void reverse(){
node *prev,*current,*next;
current=head;
prev=NULL;
while(current!=NULL){
  next=current->next;
  current->next=prev;
  prev=current;
  current=next;
}
head=prev;
/*
int i=1;
temp1=head;
//prev=head;
while(temp1!=NULL){
  prev=head;
  temp1=temp1->next;
  head=temp1;
  if (i==1){
      prev->next=NULL;
  }
  temp1=temp1->next;
  head->next=prev;
  head=temp1;



  i++;

}*/
}

int main(){
head=NULL;
int n,x,y=1;
cout<<"how many numbers?\n";
cin>>n;
for (int i=0; i<n;i++){
  cout<<"Enter the number :"<<"\n";
  cin>>x;
  insert_any(x,y);
  y++;

}
print();

reverse();
print();
return 0;
}
