#include <iostream>
using namespace std;
// encapsulation(REMEMBER INFORMATION HIDING) me data members and function ek sathe rakh sakte hain ek class(capsule me) me 
// fully encapsulated means all Data members are private
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
    public:
    point add(point &p1 , point &p2){
    point p3;
    p3.x = p1.x + p2.x;
    p3.y = p1.y+ p2.y;
    return p3;
    }
};