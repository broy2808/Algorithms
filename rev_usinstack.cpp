#include<iostream>
#include<stack>
#include<cstring>

//Reverse string using stack STL
using namespace std;
void reverse(char *c,int x){
  stack<char> S;

  //Stack push
  for (int i=0;i<x;i++){
    S.push(c[i]);
  }
  //stack pop
  for (int i=0;i<x;i++){
    c[i]=S.top();
    S.pop();
  }

}
int main(){
  char c[51];
  cout<<"Enter a string :"<<endl;
  cin>>c;
  int x=strlen(c);
  reverse(c,x);
  cout<<c<<endl;

  return 0;
}
