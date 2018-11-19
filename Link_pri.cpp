#include <iostream>

using namespace std;
//Reverse linked list using iterative method
struct node{
  int data;
  node* next;
};

struct node* insert(node* head,int data){
node* temp=new node();
temp->data=data;
temp->next=NULL;
  if (head==NULL){
     head=temp;
  }
  else{
    node* temp1=head;
    while(temp1->next !=NULL){
      temp1=temp1->next;
    }
    temp1->next=temp;
  }
  return head;
}

void print1(node* head){
  if (head==NULL) return;
  node *temp=head;
  cout<<temp->data <<" "<<endl;
  print1(head->next);


}
//only print in reverse order not actually reverse
void reversePrint(node *head){
  if (head==NULL){
    return;
    }
  reversePrint(head->next);
  cout<<head->data<<" ";

}

int main(){
node* head=NULL;
head=insert(head,2);
head=insert(head,4);
head=insert(head,8);
head=insert(head,6);
cout<<"Values in  linked list are : "<<endl;
print1(head);
reversePrint(head);//only print in reverse order not actually reverse
cout<<" "<<endl;

}
