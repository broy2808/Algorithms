# Algorithms
##### LEFT TO RIGHT Algorithm  ##################################

#include <iostream>
using namespace std;

int main(){
//Variable initialization
int a=0,k=0,i=0,l=0;
int counter=0;
//provide number of Disks as input
cout<<"Please input total number of disks(2n): "<<endl;
cin>>a;
if ((a%2)!=0){
cout<<"Error: Invalid Input.Please provide even numbers(2n) as input only."<<endl;
exit(0);
}
char listInput[a];
//Divide the disks into D(dark) and L(light)alternatively
while(i<a){
 listInput[i] = 'D';
 listInput[i+1] = 'L';
 i+=2;
}
//Print the disk values before disk swapping
cout<<"Values before disk swapping:"<<endl;
for(int i=0;i<a ;i++){
cout<<listInput[i];
}
cout<<endl;

//Disk swapping Left to right
for(k=0;k<a/2;k++){
     for(l=k;l<a-k;l++){
       if((listInput[l]=='D') && (listInput[l+1]=='L')){
         swap(listInput[l],listInput[l+1]);
         counter++;
     }
   }
}
//Print the disk values after disk swapping
cout<<"Final Values after disk swapping:"<<endl;
for(int i=0;i<a ;i++){
cout<<listInput[i];
}
cout<<endl;
//Total number of swapping
cout<<"Total number of swap is: "<<counter++<<endl;
return 0;
}


###### lawnmower Algorithm ##################################

#include <iostream>
using namespace std;

int main(){

//Variable initialization
int a,k=0,i=0,l=0,r=0;
int counter=0;
//provide number of Disks as input
cout<<"Please input total number of disks(2n): "<<endl;
cin>>a;
if ((a%2)!=0){
cout<<"Error: Invalid Input.Please provide even numbers(2n) as input only."<<endl;
exit(0);
}
char listInput[a];

//Divide the disks into D(dark) and L(alternatively)
while(i<a){
 listInput[i] = 'D';
 listInput[i+1] = 'L';
 i+=2;
}

//Print the disk values before disk swapping
cout<<"Values before disk swapping:"<<endl;
for(int i=0;i<a ;i++){
cout<<listInput[i];
}
cout<<endl;

//Disk swapping Lawn mower
for(k=0;k<a/2;k++){
  switch (k%2) {
    case 0:{
      //Left to right based on loop number
       for(l=k;l<a-k-1;l++){
       if((listInput[l]=='D') && (listInput[l+1]=='L')){
           swap(listInput[l],listInput[l+1]);
           counter++;
                     }
                  }
            break;
           }
     case 1:{
      //Right to left based on loop number
      for(r=a-k-1;r>k;r--){
      if((listInput[r]=='L') && (listInput[r-1]=='D')){
          swap(listInput[r],listInput[r-1]);
          counter++;
                        }
                   }
            break;
           }
     }
}
//Print the disk values after disk swapping
cout<<"Final Values after disk swapping::"<<endl;
for(int i=0;i<a ;i++){
cout<<listInput[i];
}
cout<<endl;
//Total number of swapping
cout<<"Total number of swaps is: "<<counter++<<endl;
return 0;
}
