#include <iostream>
using namespace std;

class Rectangle{
    double height;
    double wide;
public:
    Rectangle(){
        height=0;
        wide=0;
    }
    Rectangle(double height,double wide){
        this->height = height;
        this->wide = wide;
    }
    void set(double height,double wide){
        this->height = height;
        this->wide = wide;
    }
    void get(){
        cout<< "Height of rectangle = "<<height<<endl;
        cout << "Wide of rectangle = "<<wide<<endl;
    }
};

class Square{
    double side;
public:
    Square(){
        side=0;
    }
    Square(double side){
        this->side=side;
    }
    void set(double side){
        this->side=side;
    }
    void get(){
        cout<< "Side of square = "<<side<<endl;
    }
};

class Circle{
    double radius;
public:
    Circle(){
        radius = 0;
    }
    Circle(double radius){
        this->radius=radius;
    }
    void set(double radius){
        this->radius = radius;
    }
    void get(){
        cout<< "Radius of circle = "<<radius<<endl;
    }
};

class Shape{
    Rectangle ob1;
    Square ob2;
    Circle ob3;
public:
    Shape(double height,double wide,double side,double radius):ob1(height,wide),ob2(side),ob3(radius){}
    void get(){
        ob1.get();
        ob2.get();
        ob3.get();
    }
};

int main(){
    double height,wide,side,radius;
    cout<< "Enter height,wide,side and radius: ";
    cin>>height>>wide>>side>>radius;
    Shape object(height,wide,side,radius);
    object.get();
    return 0;
}
