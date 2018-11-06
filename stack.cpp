#include <iostream>

using namespace std;
#define max1 10
class stack_ops{
  int top;
public:
  int stack[max1];
stack_ops(){top=-1;}
bool push(int x);
void pop();
bool is_empty();
};

bool stack_ops::push(int x){

 if (top < max1){
   top++;
   stack[top]=x;
   cout<<"Element inserted :"<<x<<"\n";
   return true;
 }else if(top>=max1){
   cout<<"Stack overflow"<<endl;
   return false;
 }

}

bool stack_ops::is_empty(){
  if(top==-1){
    return true;
  }
  return false;
}

void stack_ops::pop(){
  if(is_empty()!=true){
    cout<<"Element popped: "<<stack[top]<<endl;
    top--;
  }else{
    cout<<"Stack empty"<<endl;
  }

}

int main(){
stack_ops stack;
stack.push(10);
stack.push(20);
stack.pop();

return 0;
}
