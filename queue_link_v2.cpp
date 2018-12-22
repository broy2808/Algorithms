#include <iostream>

using namespace std;

class node{
public:
  int data;
  node *next;
  
};

class queue_ops{

public:
node *front,*rear;
queue_ops(){
  front=rear=nullptr;
};
void enqueue(int x);
void dequeue();
};



void queue_ops::enqueue(int x){
node *temp=new node;
temp->data=x;
temp->next=nullptr;
 if((front==nullptr)&&(rear==nullptr)){
   cout<<"Enqueue first element: "<<temp->data<<endl;
   front=rear=temp;

 }else{
 cout<<"Enqueue element: "<<temp->data<<endl;
 rear->next=temp;
 rear=temp;
}
temp=nullptr;
 delete(temp);
}

void queue_ops::dequeue(){
node *temp=front;
if(front==nullptr) {
 cout<<"Empty queue\n";
 return;//If front or rear any one is pointing to NULL the queue is empty
}
if(front==rear){
  cout<<"Last dequeue element: "<<front->data<<endl;
  front=rear=nullptr;
}else{
  cout<<"Dequeue element: "<<front->data<<endl;
  front=front->next;
}
free(temp);

}

int main(){
queue_ops queue;
queue.enqueue(10);
queue.enqueue(20);
queue.enqueue(30);
queue.enqueue(40);
queue.enqueue(50);
queue.dequeue();
queue.dequeue();
queue.dequeue();
queue.dequeue();

return 0;
}
