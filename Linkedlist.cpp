#include <iostream>

using namespace std;
struct node{
  int data;
  node* next;
};

void printNode(struct node* n){
  while(n !=NULL){
    cout<<"Node value :: "<<n->data<<endl;
    n=n->next;
  }
}

int main(){

  node* n;
  node* t;
  node* h;
//first node
  n=new node;
  t=n;//temp pointer
  h=n;//header node
  n->data=1;
//2nd node
n=new node;//2nd node create
n->data=2;//assigning value at 2nd node data
t->next=n;//this will point next pointer of first node to 2nd node
t=t->next;//This will point temporary pointer to 2nd node

//3rd node
n=new node;//3rd node create
n->data=3;//assigning value at 3rd node data
t->next=n;//this will point next pointer of 2nd node to 3rd node
t=t->next;//point temporay pointer to 3rd node;
n->next=NULL;

printNode(h);
cout<<"hello"<<h<<endl;
  return 0;
}
