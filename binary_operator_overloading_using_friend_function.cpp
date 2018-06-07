/// functionReturnType operator op(functionParameter){function body};
/// binary operator are : +,-,*,/,[],<,>,==,=,&&,|| etc
#include <iostream>
using namespace std;

class rectangle{
    int height;
    int weight;
public:
    rectangle();
    void set(int height,int weight);
    int area();
    friend rectangle operator +(rectangle object1,rectangle object2);
};

rectangle::rectangle(){
    height=0;
    weight=0;
}
void rectangle::set(int height,int weight){
    this -> height = height;
    this -> weight = weight;
}
int rectangle::area(){
    return height*weight;
}
rectangle operator+(rectangle object1,rectangle object2){
    rectangle temp;
    temp.height = object1.height+object2.height;
    temp.weight = object1.weight+object2.weight;
    return temp;
}
int main(){
    rectangle a,b,c;
    a.set(5,10);
    b.set(6,7);
    c=a+b;
    cout<<"Area of C is : "<<c.area()<<endl;
    return 0;
}
