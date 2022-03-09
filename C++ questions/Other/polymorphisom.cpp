#include <iostream>
using namespace std;
class Human{
    public:
    int height;
    int weight;
    int age;
    public:
    int getAge(){
        return this->age;
    }
    void setAge(int a){
        this->age = a;
    }

};
class God{
    public:
    int height;
    int weight;
    int age;
    public:
    int getAge(){
        return this->age;
    }
    void setAge(int a){
        this->age = a;
    }
};
class male:public Human{
    public:
    string color;

    void sleep(){
        cout<<"Good Night"<<endl;
    }

};
class HumanGod:public Human,public God  
{
    
};
class point {
    public:
    int x;
    int y;
    static int static_variable; 
    point() { //--> empty constructor , created automatically when class is called 
    }
    point(int x, int y){
        this->x = x;
        this->y = y;
    }
        
    // point(int p) {
    //     cout<<this<<" "<<p;
    // }
    point operator + (point& p){ // operator overloading a +(b) (aisa hain + ko ek function jaisa dekho and a is a object of point class)
        point p3;
        p3.x = p.x + this->x;
        p3.y = p.y + this->y;
        return p3;
    }
    void print(){
        cout<<"("<<this->x<<","<<this->y<<")"<<endl;
    }

};
int main(){
    point p1(2,3),p2(6,4); //costructor ka kamal
    point p3 = p1+p2;
    p3.print();
    return 0;
}
// FUNCTION OVERLOADING
// do functions ka same name rakhna hain to paramets(arguments) change karna padega 
// return type change karne se nei hoga

//OPERATOR OVERLOADING
// syntax: return type operator + 
