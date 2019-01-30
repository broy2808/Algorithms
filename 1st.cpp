#include <fstream>
#include <iostream>
#include <string>

using namespace std;


int addnumbers(int firstNum, int secondNum=0){
  int combinedValue=firstNum+secondNum;
  return combinedValue;
}

//Function overloading: Same function name with different parameter list

int addnumbers(int firstNum, int secondNum, int thirdNum){
  int combinedValue=firstNum+secondNum+thirdNum;
  return combinedValue;
}

void newAge(int *age){////pass by pointer.Direct value modification in memory address
  cout<<"I used to be: "<<*age<<endl;
  *age=23;
}

void newAge2(int &ref){////pass by reference.Direct value modification in memory address.LIke a second label for value stored in memory address
  cout<<"2nd I used to be : "<<ref<<endl;
  ref=26;
}

int main(){
  int final=addnumbers(5,6);
  int final2=addnumbers(5,6,3);
  cout<<final<<endl;
  cout<<final2<<endl;
  string steveQuote="A day without sunshine is like, you know night";
  ofstream writer("steveQuote.txt");
  if(!writer){
    cout<<"Error opening file"<<endl;
    return -1;
  }else{
    writer<<steveQuote<<endl;
    writer.close();
  }

  ofstream myfile;
  myfile.open("steveQuote.txt",ios::app);
  if (myfile.is_open()){
    myfile<<"Append text";
    myfile.close();
  }else{
    cout << "Unable to open file";
  }


  char letter;
  ifstream reader("steveQuote.txt");
  if (!reader){//file not open
    cout<<"Error opening file"<<endl;
    return -1;
  }else{
    for(int i=0;!reader.eof();i++){
      reader.get(letter);
      cout<<letter;
    }
  }
  cout<<"\n";
  reader.close();

  int number;

  cout<<"Enter any number"<<endl;
  cin>>number;
  try{
    if(number!=0){
      float x=2.0/number;
      cout<<"Your number is :"<<x<<endl;
    }else{
      throw(number);
    }
  }
  catch(int number){
    cout<<number<<" is not valid"<<endl;
  }

  int nums[3]={1,3,6};
  cout<<nums<<" "<<*nums<<endl;//Arrauname is just a pointer to the array.we can access array with pointer.

  int myage=27;
  newAge(&myage);
  cout<<"My new age :"<<myage<<endl;

  int myage2=29;
  int& myref=myage2;
  newAge2(myage2);//we can use "newAge2(myref)"
  cout<<"2nd My new age :"<<myage2<<endl;

  return 0;
}
