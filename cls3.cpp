#include <string>
#include <iostream>

using namespace std;

class Animal{
public:
  virtual void makeSound(){cout<<"The animal says grr!"<<endl;}
};

class Dog:public Animal{
public:
  void makeSound(){cout<<"The dog says woof!"<<endl;}
};

class Cat:public Animal{
public:
  void makeSound(){cout<<"The cat says meow!"<<endl;}
};

//Abstract class
/*
Sometimes implementation of all function cannot be provided in a base class because we don’t know the implementation.
Such a class is called abstract class. For example, let Shape be a base class. We cannot provide implementation of function draw() in Shape,
but we know every derived class must have implementation of draw(). Similarly an Animal class doesn’t have implementation of move()
(assuming that all animals move), but all animals must know how to move. We cannot create objects of abstract classes.
A pure virtual function (or abstract function) in C++ is a virtual function for which we don’t have implementation,
we only declare it. A pure virtual function is declared by assigning 0 in declaration. See the following example.
*/

class Car{
public:
  // Pure Virtual Function
  //A class is abstract if it has at least one pure virtual function.
  virtual int getNumWheels()=0;
  virtual int getNumDoors()=0;
};

class Wagon:public Car{
public:
  virtual int getNumWheels(){cout<<"Station wagon has 4 wheels!!!"<<endl;};
  virtual int getNumDoors(){cout<<"Station wagon has 4 doors!!!"<<endl;};
  //An abstract class can have constructors and destructors.
  Wagon(){}
  ~Wagon(){}
};

int main(){
  Animal *pcat=new Cat;
  Animal *pdog=new Dog;
  pcat->makeSound();
  pdog->makeSound();
  //We can have pointers and references of abstract class type.
  Car *pwagon=new Wagon();
  pwagon->getNumWheels();
  pwagon->getNumDoors();
   return 0;
}
