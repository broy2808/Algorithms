#include <string>
#include <iostream>

using namespace std;
//Polymorphism
//C++ polymorphism means that a call to a member function will cause a different function to be executed depending on the type of object that invokes the function.
class Animal{
public:
  void getFamily(){ cout<<"we are Animals!"<<endl;}
  virtual void getClass(){cout<<"I am an Animal!"<<endl;}
  ~Animal(){

    cout<<"Class deleted!"<<endl;}
};

class Dog:public Animal{
public:
  void getClass(){cout<<"I am a Dog!"<<endl;}
  ~Dog(){cout<<"Child Class deleted!"<<endl;}
};

class GermanShepard:public Dog{
public:
  void getClass(){cout<<"I am a German Shepard Dog!"<<endl;}
  void getDerived(){cout<<"I am an Animal and Dog!"<<endl;}
};


void whatClass(Animal animal){
  animal.getClass();
}
void whataClass(Animal *animal){
  animal->getClass();
}
int main(){
//normal reference
   Animal animal;
   animal.getClass();

   Dog dog;
   dog.getClass();
   whatClass(animal);
   whatClass(dog);//without polymorphism you cannot invoke the dog object function
//reference class with pointer
//Polymorphism
   cout<<"  VIRTUAL   "<<endl;
   Animal *animal1=new Animal;
   Dog *dog1=new Dog;
   animal1->getClass();
   dog1->getClass();
   //below with polymorphism by adding virtual infront of parent function name and it can only be done
   whataClass(animal1);
   whataClass(dog1);
   cout<<"  ANOTHER-POLYMORPHISM   "<<endl;
   Dog spot;
   GermanShepard max;
   //base class can also call derived class methods as long they exists in the base class
   //basically another example of polymorphyism.We can call both parent and child class methods
   Animal* ptrDog=&spot;
   Animal* ptrshepard=&max;
   ptrDog->getFamily();
   ptrDog->getClass();
   ptrshepard->getFamily();
   ptrshepard->getClass();


   return 0;
}
