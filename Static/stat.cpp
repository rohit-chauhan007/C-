//static keyboard -- static keyboard remember variable and creat alg memory location
//(1)in function 
//(2)in class

//noraml   function 
/*
#include <iostream>
#include <string>
using namespace std;

void fun(){
   int x = 0;
   cout <<x <<endl;
   x++;
}
int main(){
    fun();
    fun();
    fun();
    return 0;
}
    */

//static in function = variable decleared as static in a function are created & initialise once  for the life time of the program
//note = 
/*
#include <iostream>
#include <string>
using namespace std;

void fun(){
   static int x = 0;
   cout <<x <<endl;
   x++;
}
int main(){
    fun();
    fun();
    fun();
    return 0;
}
    */
//static keyboard in class  = ek hi variable jo sare object share karte h 
//normal class 
/*
#include <iostream>
#include <string>
using namespace std;

class A{
    public:
    int x = 0;
    int  incX(){
        x = x +1;
        return x;
    }
};
int main(){
    A obj1;
    cout <<obj1.incX()  <<endl;
    cout <<obj1.incX() <<endl;
    return 0;
}
*/