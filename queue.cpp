#include <iostream>

using namespace std;
#define max1 4
class queue_ops{
  int front;
  int rear;
public:
  int queue[max1];
queue_ops(){
front=-1;
rear=-1;
}
void enqueue(int x);
void dequeue();
bool is_empty();
bool is_full();
};

bool queue_ops::is_empty(){
  if ((front==-1)&&(rear==-1)){
    return true;
  }else{
    return false;
  }

}

bool queue_ops::is_full(){
  if (rear==max1-1){
    return true;
  }else{
  return false;
  }

}

void queue_ops::enqueue(int x){
 if (is_empty()==true){
   rear++;
   front++;
   queue[rear]=x;
   cout<<"Element inserted in queue:"<<queue[rear]<<endl;
 }else{
  if (is_full()==true){
    cout<<"Queue overflow :"<<endl;
  }else{
    rear++;
    queue[rear]=x;
    cout<<"Element inserted in queue:"<<queue[rear]<<endl;
   }
  }
}

void queue_ops::dequeue(){
  if (is_empty()!=true){
   if (front!=rear){
    cout<<"Element Dequeue: "<<queue[front]<<endl;
    front++;
  }else{
    cout<<"Last Element Dequeue: "<<queue[front]<<endl;
    front=rear=-1;
   }

  }else{
  cout<<"No element in queue :"<<endl;
  }
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
queue.enqueue(20);
queue.enqueue(30);
queue.enqueue(40);
queue.enqueue(50);

return 0;
}
