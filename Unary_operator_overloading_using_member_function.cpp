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
    rectangle operator ++(int a);
    rectangle operator ++();
    rectangle operator -();
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
rectangle rectangle:: operator++(){
    rectangle temp;
    ++height;
    ++weight;
    temp.height = height;
    temp.weight = weight;
    return temp;
}
rectangle rectangle ::operator++(int a){
    rectangle temp;
    temp.height = height;
    temp.weight = weight;
    height++;
    weight++;
    return temp;
}
rectangle rectangle ::operator-(){
    rectangle temp;
    temp.height = -height;
    temp.weight = -weight;
    return temp;
}
int main(){
    rectangle a,b,c;
    a.set(5,10);
    cout<<"Area of a is : "<<a.area()<<endl;
    cout<<"Area of b is : "<<b.area()<<endl;
    cout<<"Area of C is : "<<c.area()<<endl;
    c=a++;
    cout<<"Area of C is : "<<c.area()<<endl;
    cout<<"Area of a is : "<<a.area()<<endl;
    c=++b;
    cout<<"Area of C is : "<<c.area()<<endl;
    cout<<"Area of b is : "<<b.area()<<endl;
    c = -a;
    cout<<"Area of C is : "<<c.area()<<endl;
    cout<<"Area of a is : "<<c.area()<<endl;
    return 0;
}
