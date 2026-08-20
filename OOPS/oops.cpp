//oops - oops is proggramming pradigram that orginized a program using a class and object 

//application 
//1 Easy to understand 
//2 Reusable 
//3 Group of object 
//4 class and object 

//class - class is a like a blueprint for object 
//object  = object are real entities on the real world

//Syntax 
/*
class className {
access modifier...
 properties 
 string name;
 string department
 string subject;
 int salary;
 
 methods/member function
 void changeDep(int newDept){
 bbb
 }


}
*/
/*
#include <iostream>
#include <string>
using namespace std;

//class syntax
class Teacher{
    //access modifier 
    public:
    //properties
    string  name;
    string department;
    string subject;
    int salary;

    //method / function member function
    void changeDep(string newDept){
        department = newDept;
    }
};
int main(){
   
    Teacher t1;
    t1.name = "Rohit";
    t1.subject = "Math";
    cout << t1.subject <<endl;
    cout << t1.name;
  



    return 0;
}
    */

//constructor -constoctur is method invoked automatically at time object creation   used for object creation
//without returnType function == constructor

//same name as class 
//cosntroction have not return type
//construction innvoked automatically at object creation 
//constuction invoked only one time (automatically);
//memory allocation happen when constructor is called;
//always create construct in public 
//types (1) non parameterize constructor (2) parameterize constructor

/*
#include <iostream>
#include <string>
using namespace std;

class Teacher{
     private:
      int salary;
      string password;
    public:
    //none parameterize constructor
    Teacher(){
        cout <<"Hello I am consttuctor";

    }
    //parameterize constructor
    Teacher(string name,string s,string dep,int a){
        //this pointer
        this->name = name;
        subject = s;
        department = dep;
        age = a;
    }
   

    public:
     string name;
     int age;
     string subject;
     string department;

     void getInfo(){
        cout <<"name  " <<name <<endl;
        cout <<"Subject  " <<subject <<endl;
    }

    

};
int main(){
    Teacher t1("Rohit","Computer science","cse",25);//constructor crate automatically when object creat

    t1.getInfo();
    return 0;
}
    */

//copy constructor 
//a special constructor (default) used copy properties of one object to another object
//(1)shallow copy and (2)deep copy

/*
#include <iostream>
#include <string>
using namespace std;
class Teacher{
    public:
    string name;
    string subject;
    int salary;
   public:
    Teacher(string name,string subject,int salary){
        cout <<"Constructor" <<endl;
        this->name = name;
        this->subject = subject,
        this->salary = salary;
    }
    //default copy constructor
    Teacher(Teacher &orgObj){//pass by refrence
        cout <<"custom copy constructor";
        this->name = orgObj.name;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
        
    }
    void getInfo(){
        cout <<"Name = "  <<name;
    }
    void getinfoCustcopyc(){
          cout <<"Subjet" <<subject;
          cout <<"Name = "  <<name;
    }
};
int main(){
    Teacher t1("rohit","Math",21000);
    // t1.getInfo();
    Teacher t2(t1);//default copy controcture -invoke;

    t2.getinfoCustcopyc();//custom constructor

    return 0;
}
*/
//innheritace - inheritance is oops conscept that inharit the base/parent class object and function another derived/child class;
//types 
//1> single inheritace - single function or object inherite
//2> multilevel -forming a chain of class
//multiple inheritace - one derive/child class multiple base/parent class
//hierarchical - Hierarchical Inheritance means multiple child classes inherit from a single parent class.
//hybrid - combination of two or more class

//inheritance
/*
#include <iostream>
#include <string>
using namespace std;
class Person{
public:
    string name;
    int age;
    Public(){

    }

};

class Student :public Person{
    public:
   int roll;


   void getInfo(){
    cout <<name <<endl;
    cout <<age <<endl;
   
}
};


int main(){
    Student s1;
    s1.name = "Rohit";
    s1.age = 21;
    s1.roll = 123;
    s1.getInfo();
    
}
    */

  //multilevel inheritance 
  //one child class inherit multiple class 
  /*
  #include <iostream>
  #include <string>
  using namespace std;
  
class Person {
    public:
    string name;

};
class Student :public Person{
    public:
    int age;
};
class GradStudent :public Student{
    public:
    string sub;

    getInfo(){
        cout <<name <<endl;
        cout <<age <<endl;
    
    }
};
int main(){
   
    GradStudent s1;
    s1.name = "Rohit";
    s1.age = 21;
    s1.getInfo();

    return 0;


}
*/
//mulltiple inheritance - 1 children class inherit 2 parents class property
/*
#include <iostream>
#include <string>
using namespace std;
class A{
  public:
  int a;
  
};
class B{
    public:
   int b;

};
class Add : public A, public B{
    
};
int main(){
   Add c1;
   c1.a = 10;
   c1.b= 10;
   int sum = c1.a + c1.b;
   cout <<sum;

    return 0;
}
*/
//multilevel- 2 parents class and one child class 
/*
#include <iostream>
#include <string>
using namespace std;

class A{
    public:
    void showA(){
        cout <<"SHOW A";
    }
};
class B{
    public:
    void showB(){
        cout <<"Show B";
    }
};
class C : public A,public B{

};
int main(){
    C c1;
    c1.showB();
    return 0;
}
*/

//(3)- hierchical - 1 parent class 2 child class
/*
#include <iostream>
#include <string>
using namespace std;
class Animal{
    public:
    void eat(){
        cout <<"eating" <<endl;
    }
};
class Dog : public Animal{
    public:
    void Bark(){
        cout <<"Barking";
    }
};
class Cat : public Animal{
    void Meow(){
        cout <<"Meow";
    }
};
int main(){
    Cat obj1;
    Dog obj2;
    obj2.eat();
    return 0;
}
*/
//Hybrid- combination of all inheritace
