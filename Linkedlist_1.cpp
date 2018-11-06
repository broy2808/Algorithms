#include <iostream>

using namespace std;

struct node{
  int data;
  node* next;
};
struct node* head;//Head is used as global variable
//insert node from front
void insert_front(int x){
  node* temp=new node;
  temp->data=x;
  temp->next=head;
  head=temp;
}

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
cout<<"TEST 2"<<temp2->data<<endl;
temp2=temp2->next;
}

temp1->next=temp2->next;
temp2->next=temp1;

}
void print(){
  node* temp=head;
  cout<<"The list is :";
  while (temp!=NULL){
  cout<<temp->data<<"\n";
  temp=temp->next;
  }
}

int main(){
head=NULL;
int n,x;
cout<<"how many numbers?\n";
cin>>n;
for (int i=0; i<n;i++){
  cout<<"Enter the number :"<<"\n";
  cin>>x;
  insert_front(x);

}
insert_any(4,2);

print();
}
