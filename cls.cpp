#include <string>
#include <iostream>

using namespace std;
//object oriented programming is basically modelling real world objects in code.


class Animal{
private:   //anything marked as private means we can only use/change inside the methods in the class
   int height;
   int weight;
   string name;

   static int numOfAnimals;//When we declare a member of a class as static it means no matter how many objects of the class are created, there is only one copy of the static member.

 public:
   int getHeight(){return height;}
   int getWeight(){return weight;}
   string getName(){return name;}
   void setHeight(int cm){height=cm;}
   void setWeight(int kg){weight=kg;}
   void setName(string animalName){name=animalName;}

   //Below are all prototypes
   //constructor-it is going to be called everytime a object is created
   Animal(int,int, string);
   //Destructor
   ~Animal();
   //Another constructor with no attribute.This is an example of overloading.constructor name can be same but numnber of attribute passed should be different.
   Animal();
   //There can also be protected class/attibute to be use by class or child class

   static int getNumOfAnimals(){return numOfAnimals;}
   void toString();
};

//declare everything
int Animal::numOfAnimals=0;
Animal::Animal(int height1,int weight1,string name1){
  this->height=height1;
  this->weight=weight1;
  this->name=name1;
}

Animal::~Animal(){
  cout<<"Animal "<<this->name<<" is destroyed"<<endl;
}

Animal::Animal(){
  Animal::numOfAnimals++;
}

void Animal::toString(){
  cout<<this->name<<" is "<<this->height<<" cms tall and "<<this->weight<<" kgs in weight "<<endl;
}


//Inheritence
class Dog:public Animal{
private:
  string sound="Woof";
public:
  void getSound(){cout<<sound<<endl; }
  Dog(int,int, string,string);
  Dog():Animal(){};
  void toString();
};

Dog::Dog(int height,int weight, string name,string bark):
Animal(height,weight,name){
  this->sound=bark;
}

void Dog::toString(){
  //because name,height,weight is private in Animal class we need to use get methods
  cout<<this->getName()<<" is "<<this->getHeight()<<" cms tall and "<<this->getWeight()<<" kgs in weight and says "<<this->sound<<endl;
}

int main(){
   Animal frog;
   frog.setHeight(10);
   frog.setWeight(5);
   frog.setName("Fred");

   frog.toString();

   //Accessing values using gettters
   cout<<"2nd Version: "<<frog.getName()<<" is "<<frog.getHeight()<<" cms tall and "<<frog.getWeight()<<" kgs in weight "<<endl;

   Animal frog1(30,30,"Cat");
   cout<<"3rd Version: "<<frog1.getName()<<" is "<<frog1.getHeight()<<" cms tall and "<<frog1.getWeight()<<" kgs in weight "<<endl;


   Dog spot(30,15,"Gypsy","Woof");
   cout<<"Number of Animals :"<<Animal::getNumOfAnimals()<<endl;
   spot.getSound();
   spot.toString();
   spot.Animal::toString();
   return 0;
}
