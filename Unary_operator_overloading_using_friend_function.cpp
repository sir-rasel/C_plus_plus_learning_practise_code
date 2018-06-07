/// functionReturnType operator op(functionParameter){function body};
/// Unary operator are : ++,--,(-)
#include <iostream>
using namespace std;

class rectangle{
    int height;
    int weight;
public:
    rectangle();
    void set(int height,int weight);
    int area();
    friend rectangle operator ++(rectangle &object,int a);
    friend rectangle operator ++(rectangle &object);
    friend rectangle operator -(rectangle object);
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
rectangle operator++(rectangle &object,int a){
    rectangle temp;
    temp.height = object.height;
    temp.weight = object.weight;
    object.height++;
    object.weight++;
    return temp;
}
rectangle operator++(rectangle &object){
    rectangle temp;
    object.height++;
    object.weight++;
    temp.height = object.height;
    temp.weight = object.weight;
    return temp;
}
rectangle operator-(rectangle object){
    rectangle temp;
    temp.height = -object.height;
    temp.weight = -object.weight;
    return temp;
}
int main(){
    rectangle a,b,c;
    a.set(5,10);
    c=a++;
    cout<<"Area of C is : "<<c.area()<<endl;
    cout<<"Area of A is : "<<a.area()<<endl;
    c=++b;
    cout<<"Area of C is : "<<c.area()<<endl;
    cout<<"Area of B is : "<<b.area()<<endl;
    c= -a;
    cout<<"Area of C is : "<<c.area()<<endl;
    return 0;
}
