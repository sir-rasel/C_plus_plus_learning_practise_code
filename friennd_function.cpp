#include <iostream>
using namespace std;

class ABC{
    int a;
    int b;
    int c;
public:
    void set();
    void set(int d,int e,int f);
    friend int sum(ABC ob);
};

void ABC::set (){
    a=0;
    b=0;
    c=0;
}
void ABC::set (int d,int e,int f){
    a=d;
    b=e;
    c=f;
}
int sum(ABC ob){
    return ob.a+ob.b+ob.c;
}

int main(){
    ABC ob;
    ob.set();
    cout<<"Sum of member is : "<<sum(ob)<<endl;
    ob.set(5,6,7);
    cout<<"Sum of member is : "<<sum(ob)<<endl;
    return 0;
}
