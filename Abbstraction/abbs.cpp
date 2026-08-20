//Abbstraction - hide all the unneccesary data and show only important data
//abstract dusre class ke lie blue print ka kaam krta h 
//iska object creat nhi ho skta h 

#include <iostream>
#include <string>
using namespace std;

class Shape{//abstract class
    public:
    virtual draw() = 0;//pure virtual function - ke karn class abstract bnta h
};
class circle : public Shape{
    public:
    draw(){
        cout << " drawing a circle";
    }
};
int main(){
    circle c1;
    c1.draw();
}