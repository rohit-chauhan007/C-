//Polymorphism - 
//poly means many;
//morph means many;
//polymorphism is the ablity of a object to take a diffrent form or behave in diffrent way depending on the contex in which they are used;
//(1)compile time (2)run time
//compile time -(1) constructor overloading (2)function overloading

//compile time 
// #include <iostream>
// #include <string>
// using namespace std;
// class Student{
//     public:
//     string name;
//     Student(){//non parameterize
//        string name = "Rohit";
//     }
//     Student(string name){//parameterize
//         this->name = name;
//     }


// };
//     int main(){
//         Student s1("rohit");
//         cout <<s1.name;
//         return 0;
//     }


//compile time - (2) function overloading - same function name bt diffrent parameter
// #include <iostream>
// #include <string>
// using namespace std;

// class Math{
//     public:
//     int sum(int a ,int b){
//          int sum = a + b;
//             cout <<sum;
//          return sum;
//     }
//     int sum(int a, int b,int c){
//         int sum = a+b+c;
//         cout <<sum;
//         return sum;
        
//     }
// };
// int main(){
//     Math s1;
//     s1.sum(1,2,3);
//     return 0;
// }

//runtime (dynamic) - 
//(1) function overriden- parent and child class contains same funtion with diffrent implmentation
//overloadin - in same class same function bt diffrent parameter
//overridden - inheritace class have same function bt depend upon oject creation
//virtual function 
/*funtion overidden 
#include <iostream>
#include <string>
using namespace std;
class Parent{
    public:

    void getInfo(){
        cout <<"Parent function calll";
    }

};
class Child : public Parent{
    public:
    void getInfo(){
        cout <<"Child function is calling";
    }
};
int main(){
    Child p1;
    p1.getInfo();
    return 0;
}
    */

//virtual function - A virtual function is member function that you expect to be redifined in derived class
//(1)A vertual function is dynamic in nature 
//(2) Vertual fuction is define by the vertual funtion inside a base/Parent class and overidden in child/derived class
//(3)A vertual funtion is called during runtime

#include <iostream>
#include <string>
using namespace std;

class Parent{
    public:
    void getInfo(){
        cout <<"Parent function called";
    }
    virtual void hello(){
        cout <<"Parent/virtual funtion call";
    }
};
class Child : public Parent{
    public:
    void getInfo(){
        cout <<"Child function is call";
    }
    void hello(){
        cout <<"Child class is called";
    }
};
int main(){
    Parent p1;
    Child c1;

    c1.hello();
}


