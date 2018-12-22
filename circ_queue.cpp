#include <iostream>

using namespace std;
#define max1 4
class queue_cir{
  int front;
  int rear;
public:
  int queue[max1];
queue_cir(){
front=-1;
rear=-1;
}
void enqueue(int x);
void dequeue();
bool is_empty();
bool is_full();
};

bool queue_cir::is_empty(){
  if((front==-1)&&(rear==-1)){
    return true;
  }else{
    return false;
  }
}

bool queue_cir::is_full(){
  if((rear+1)%max1==front){
    return true;
  }else{
    return false;
  }
}
void queue_cir::enqueue(int x){
 if (is_empty()==true){
   rear++;
   front++;
   queue[rear]=x;
   cout<<"1st Element inserted in queue:"<<queue[rear]<<endl;
 }else{
  if (is_full()==true){
    cout<<"Circular Queue overflow :"<<endl;
  }else{
    rear=((rear+1)%max1);
    queue[rear]=x;
    cout<<"Element inserted in queue:"<<queue[rear]<<endl;
   }
  }
}

void queue_cir::dequeue(){
  if(is_empty()==true){
    cout<<"Queue is empty, no element to dequeue."<<endl;
  }else if(front!=rear){
    cout<<"Element Dequeue: "<<queue[front]<<endl;
    front=(front+1)%max1;
  }else{
    cout<<"Last Element Dequeue: "<<queue[front]<<endl;
    front=-1;
    rear=-1;
  }
}

int main(){
queue_cir queue;
queue.enqueue(10);
queue.enqueue(20);
queue.enqueue(30);
queue.enqueue(40);
queue.enqueue(50);
queue.dequeue();
queue.dequeue();
queue.dequeue();
queue.dequeue();
queue.enqueue(20);
queue.enqueue(30);
queue.enqueue(40);
queue.enqueue(50);
queue.dequeue();
queue.dequeue();
queue.dequeue();
queue.enqueue(100);
queue.enqueue(300);
queue.enqueue(400);
queue.enqueue(500);
queue.dequeue();
queue.dequeue();
queue.dequeue();
queue.dequeue();
return 0;
}
