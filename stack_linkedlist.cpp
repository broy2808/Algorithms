#include<iostream>

using namespace std;

struct node{
  int data;
  struct node* link;
};

struct node* top=NULL;

void push(int x){
  struct node* temp=new node();
  temp->data=x;
  cout<<"Pushed :"<<temp->data<<endl;
  temp->link=top;
  top=temp;
}
void pop(){
  struct node* temp=top;
  if (top!=NULL){
    cout<<"Popped : "<<top->data<<endl;
    top=top->link;
    free(temp);
  }else{
    cout<<"Empty stack."<<endl;
  }
}

int main(){

  push(2);
  push(3);
  push(4);
  pop();
  return 0;
}
