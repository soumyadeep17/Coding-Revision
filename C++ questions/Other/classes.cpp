#include <iostream>
using namespace std;

// empty class takes 1 byte of memory
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
        
    point(int p) {
        cout<<this<<" "<<p;
    }
    static point add(point &p1 , point &p2){
    point p3;
    p3.x = p1.x + p2.x;
    p3.y = p1.y+ p2.y;
    return p3;
    }

};
// class point_op{
int point::static_variable = 16 ; // static variable/fucnctions jisko hum object nai bhi banake acess kar sakte hain.
// };
int main(){

// {   // static allocated
//     point p1,p2 ;
//     p1.x = 2;
//     p2.x = 2;
//     p2.y = 2;
//     p1.y = 2;
//     point p3 = p3.add(p1,p2);
//     // dynamically (pointers use karke)
//     point *ptr1 = new point;
//     point *ptr2 = new point;
//     // method 1
//     (*ptr1).x = 2;
//     (*ptr2).x = 2;
//     (*ptr2).y = 2;
//     (*ptr1).y = 2;
//     // method 2
//         (*ptr1).x = 2;
//     ptr2->x = 2;
//     ptr2->y = 2;
//     ptr1->y = 2;
//     // point p3 = p3.add(p1,p2);
//     // p3.print(p1);

    point p1(2,3),p2(6,4);
    point p3;
    p3 = p3.add(p1,p2);
    cout<<p3.x<<endl;
    point p4(p1);// both 58 and 59 are copy constructor(default)
    //point p2 = p1;// copy constructor p1 ka constructor p4 me equal ho jata hain
    p3 = point::add(p1,p2); // using static func concept
    cout<<p3.y<<endl;

}

//"this" is a pointer automatically created for the current object of a class
// constructor kitne bhi bana sakte hain but name same hoga
// copy constructor pehle se hi hota hain --> SHALLOW copy(matlab dono same value ko bata rahe hain , matlab agar ek ko change kia to dono change ho jayega)
// khud ka bhi bana sakte hain class ke andar
// destructor is used to free the memory taken by the object 
// destructor works automatically for static allocated objects
// for dynamically allocated we have to do it manually by "delete object" keyword