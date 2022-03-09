// child(sub) class inheriting the (properties) of a parent(super) class
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
class HumanGod:public Human,public God //Multiple Inheritance
{
    
};
int main(){
    male somu;
    //somu.age --> somu is a male object but age is a human data member , due to inheritance we can use human ka variable in male ka object
    somu.setAge(23);
    cout<<somu.getAge()<<endl;
}


// public --> kahi bhi acess karlenge
// protected --> sirf child class acess kar payega
// private --> apna class chodke kahi bhi koi access nei kar payega
