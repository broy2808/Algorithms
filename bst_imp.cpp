#include <iostream>

using namespace std;

struct bstnode{
  int data;
  bstnode* left;
  bstnode* right;
};

bstnode* getnewnode(int data){
  bstnode* newnode=new bstnode();
  newnode->data=data;
  newnode->left=newnode->right=NULL;
  return newnode;
}
bstnode* insert(bstnode* root,int data){
  if (root==NULL){
     root=getnewnode(data);
  }else if(data <= root->data){
     root->left=insert(root->left,data);
  }else{
     root->right=insert(root->right,data);
  }
   return root;
}

bool search(bstnode* root,int data){
  if(root==NULL) {
     return false;
   }else if (data==root->data){
     return true;
  }else if(data <= root->data){
     return search(root->left,data);

  }else{
     return search(root->right,data);

  }

}
int main(){
  bstnode *root=NULL;

  root=insert(root,15);
  root=insert(root,10);
  root=insert(root,20);
  root=insert(root,8);
  root=insert(root,12);
  root=insert(root,17);

  int x;
  cout<<"Enter a value :"<<endl;
  cin>>x;
  if (search(root,x)==true){
  cout<<"The value is present"<<endl;
  }else{
  cout<<"The value is not present"<<endl;
 }

  return 0;
}
